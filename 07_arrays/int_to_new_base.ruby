def get_int(message)
    puts message
    return gets.chomp.to_i
end

def int_to_new_base(num_to_convert, new_base)
    base_conversion = [ '0', '1', '2', '3', '4', '5', '6', '7',
        '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' ]
    converted_num_chars = []

    loop do
        break if num_to_convert == 0
        new_digit = base_conversion[num_to_convert % new_base]
        converted_num_chars.push(new_digit)
        num_to_convert = num_to_convert / new_base
    end

    return converted_num_chars.reverse.join('')
end

num_to_convert = get_int 'Enter number to convert:'
new_base = get_int 'Enter the base you want to convert to:'

puts "The converted number is : #{int_to_new_base(num_to_convert, new_base)}"

