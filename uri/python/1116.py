numero_entradas = int(input())

for i in range(numero_entradas):
    x, y = [int(z) for z in input().split()]
    if y == 0:
        print('divisao impossivel')
        continue
    else:
        print(x/y)
