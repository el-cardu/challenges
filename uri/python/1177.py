flag = 0
number = int(input())
for i in range(1001):
    print('N[{0}] = {1}'.format(i, flag))
    flag += 1
    if flag == number:
        flag = 0
    