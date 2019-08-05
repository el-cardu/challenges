value = int(input())
inputs = []

for x in range(value):
    inputs.append(int(input()))

for i in inputs:
    if i == 0:
        print('NULL')
    elif i % 2 == 0 and i > 0:
        print('EVEN POSITIVE')
    elif i % 2 == 0 and i < 0:
        print('EVEN NEGATIVE')
    elif i % 2 != 0 and i > 0:
        print('ODD POSITIVE')
    elif i % 2 != 0 and i < 0:
        print('ODD NEGATIVE')