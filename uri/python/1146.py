limit = int(input())
x = 1

while x <= limit:
    if x != limit:
        print('{} '.format(x), end='')
    else:
        print('{}'.format(x))
        limit = int(input())
        x = 0
    if limit == 0:
        break
    x += 1
