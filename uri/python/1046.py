inicio_jogo, fim_jogo = [int(x) for x in input().split()]
hours_in_a_day = 24

if fim_jogo > inicio_jogo:
    duracao = fim_jogo - inicio_jogo
elif inicio_jogo > fim_jogo: 
    duracao = (hours_in_a_day - inicio_jogo) + fim_jogo
else:
    duracao = hours_in_a_day 

print('O JOGO DUROU {} HORA(S)'.format(duracao))
