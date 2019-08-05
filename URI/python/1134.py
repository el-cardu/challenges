quantidade_alcool = 0
quantidade_gasolina = 0
quantidade_diesel = 0

while True:
    codigo = int(input())
    if codigo == 4:
        print('MUITO OBRIGADO')
        print('Alcool:', quantidade_alcool)
        print('Gasolina:', quantidade_gasolina)
        print('Diesel:', quantidade_diesel)
        break
    elif codigo == 1:
        quantidade_alcool += 1
    elif codigo == 2:
        quantidade_gasolina += 1
    elif codigo == 3:
        quantidade_diesel += 1
