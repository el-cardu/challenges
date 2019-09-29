vitorias_inter = 0
vitorias_gremio = 0
empates = 0
quantidade_grenais = 0

while True:
    
    inter, gremio = [int(x) for x in input().split()]
    quantidade_grenais += 1 
    
    if inter > gremio:
        vitorias_inter += 1
    elif gremio > inter:
        vitorias_gremio += 1
    else:
        empates += 1

    print('Novo grenal (1-sim 2-nao)')
    opcao = int(input())
    if opcao == 1:
        continue
    elif opcao == 2:
        print(quantidade_grenais, 'grenais')
        print('Inter:{}'.format(vitorias_inter))
        print('Gremio:{}'.format(vitorias_gremio))
        print('Empates:{}'.format(empates))

        if vitorias_inter > vitorias_gremio:
            print('Inter venceu mais')
        elif vitorias_gremio > vitorias_inter:
            print('Gremio venceu mais')
        else:
            print('Não houve vencedor')

        break
