def maiorAB(x, y):
    return (x + y + abs(x - y)) / 2

a, b, c = [int(x) for x in input().split()]

maior = int(maiorAB(maiorAB(a, b), c))

print('{} eh o maior'.format(maior))
