numbers = []

for i in range(10):
    entrada = int(input())
    if entrada <= 0:
        entrada = 1
    numbers.append(entrada)

for p, n in enumerate(numbers):
    print('X[{0}] = {1}'.format(p, n))
