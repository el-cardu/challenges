def easy_fibonacci(n):
    x, y = 0, 1
    print(x, end=' ')
    while n - 1 > 0:
        x, y = y, x + y
        if n == 2:
            print(x)
            break
        print(x, end=' ')
        n -= 1


n = int(input())
easy_fibonacci(n)
