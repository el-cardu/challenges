numero_entradas = int(input())
soma = 0

for i in range(numero_entradas):
    x, y = [int(z) for z in input().split()]
    if x > y:
        x, y = y, x
    for n in range (x+1, y):
        if n % 2 != 0:
            soma += n
    print(soma)
    soma = 0
