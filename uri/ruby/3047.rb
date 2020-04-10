mae = gets.chomp.to_i

primeiro_filho = gets.chomp.to_i
segundo_filho = gets.chomp.to_i
terceiro_filho = mae - primeiro_filho - segundo_filho

mais_velho = primeiro_filho > segundo_filho ? primeiro_filho : segundo_filho
mais_velho = mais_velho > terceiro_filho ? mais_velho : terceiro_filho

puts mais_velho
