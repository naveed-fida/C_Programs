def str_to_num(str)
    str = str.strip
    sign = str.start_with?('-') ? -1 : 1
    str = str[1, str.length] if %w(- +).include?(str.chr)

    raise 'Invalid number string.' if invalid_num_string(str);

    digits = str.gsub(".", '').chars
    num = digits.reduce(0) do |product, digit|
        product * 10 + (digit.ord - '0'.ord)
    end

    power = str.include?('.') ? str[(str.index('.') + 1)..-1].length : 0
    sign * (power == 0 ? num : num / 10.0**power)
end

def invalid_num_string(str)
    str.match(/[^0-9.]/) || str.count('.') > 1
end

puts str_to_num(".111")