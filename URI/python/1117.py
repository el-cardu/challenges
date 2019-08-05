soma = 0
conta_notas = 0

while True:
    if conta_notas == 2:
        print('media = {:.2f}'.format(soma/2))
        break
    nota = float(input())
    if nota < 0 or nota > 10:
        print('nota invalida')
        continue
    else:
        soma += nota
        conta_notas += 1

    