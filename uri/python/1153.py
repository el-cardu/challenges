def fatorial(n):
    x = 1
    while n != 0:
        x *= n
        n -= 1
    return x

n = int(input())
print(fatorial(n))
