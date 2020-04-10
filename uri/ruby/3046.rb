def calcula_quantidade_pecas(n)
    return ((n + 1) * (n + 2)) / 2
end

puts calcula_quantidade_pecas(gets.chomp.to_i)