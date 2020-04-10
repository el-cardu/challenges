quantidade_de_viloes = gets.chomp.to_i

quantidade_de_viloes.times do
    vilao = gets.chomp
    puts 'Y' unless vilao.upcase.eql?("BATMAIN")
    puts 'N' if vilao.upcase.eql?("BATMAIN")
end