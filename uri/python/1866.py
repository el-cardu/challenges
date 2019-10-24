trials = int(input())

while trials > 0:
    numero = int(input())
    if numero % 2  == 0:
        print(0)
    else:
        print(1)
    trials -= 1