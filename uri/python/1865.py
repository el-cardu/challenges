num = int(input())

while num > 0:
    name, value = [x for x in input().split()]
    if name == 'Thor':
        print('Y')
    else:
        print('N')
    num -= 1
