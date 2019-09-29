def printa_fibonacci(posicao):
    print('Fib({0}) = {1}'.format(posicao, fibonacci[posicao]))

fibonacci = [0, 1]

for i in range(61):
    if i >= 2:
        fibonacci.append(fibonacci[i-2] + fibonacci[i-1])

numero_de_entradas = int(input())

for x in range(numero_de_entradas):
    posicao = int(input())
    printa_fibonacci(posicao)
