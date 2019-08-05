value = int(input())
x = 1

for i in range(value):
    print(x, x ** 2, x ** 3)
    print(x, x ** 2 + 1, x ** 3 + 1)
    x += 1
