def checa_resposta(resposta, resposta_correta)
    return 0 unless resposta == resposta_correta
    return 1 if resposta == resposta_correta
end

resposta_correta = gets.chomp.to_i
A, B, C, D, E = gets.split.map(&:to_i)
numero_de_acertos = 0

numero_de_acertos += checa_resposta(A, resposta_correta)
numero_de_acertos += checa_resposta(B, resposta_correta)
numero_de_acertos += checa_resposta(C, resposta_correta)
numero_de_acertos += checa_resposta(D, resposta_correta)
numero_de_acertos += checa_resposta(E, resposta_correta)

puts numero_de_acertos
