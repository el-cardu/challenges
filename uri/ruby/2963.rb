bobos = gets.chomp.to_i
carlos = gets.chomp.to_i
bobos -= 1
eleito = 'S'
mais_votado = ''

bobos.times do
    bobo = gets.chomp.to_i
    if bobo > carlos
        eleito = 'N'
        mais_votado = 'outro'
    end
    eleito = 'S' unless mais_votado == 'outro'
end

puts eleito
