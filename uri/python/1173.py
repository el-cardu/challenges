number = int(input())
array_filled = [0]

array_filled[0] = number

for p in range(10):
    if p != 0:
        array_filled.append(2 * array_filled[p-1])

for e, i in enumerate(array_filled):
    print('N[{0}] = {1}'.format(e, i))
