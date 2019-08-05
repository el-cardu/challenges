steps, limit = [int(x) for x in input().split()]
x = 1

while x <= limit:
    if x % steps != 0:
        print('{} '.format(x), end='')
    else:
        print('{}'.format(x))
    x += 1
