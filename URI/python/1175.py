numbers = []

for i in range(20):
    numbers.append(int(input()))

for p, n in enumerate(reversed(numbers)):
    print('N[{0}] = {1}'.format(p, n))
