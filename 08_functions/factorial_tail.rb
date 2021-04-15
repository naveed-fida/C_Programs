def factorial(n, acc = 0)
    return n == 0 ? acc : factorial(acc * n, n - 1)
end

puts factorial 5