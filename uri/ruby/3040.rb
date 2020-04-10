def pode_escolher_arvore(altura, diametro, galhos)
    if 200 <= altura and altura <= 300 and diametro >= 50 and galhos >= 150 
        return 'Sim'
    else
        return 'Nao'
    end
end

arvores = gets.chomp.to_i

arvores.times do 
    altura, diametro, galhos = gets.split.map(&:to_i)
    puts pode_escolher_arvore(altura, diametro, galhos)
end
    