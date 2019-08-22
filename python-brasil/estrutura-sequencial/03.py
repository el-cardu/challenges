def soma(x, y):
    return x + y


if __name__ == '__main__':
    x, y = [int(x) for x in input().split()]
    print(soma(x, y))