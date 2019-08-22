import math

def calcula_area(raio):
    return math.pi * math.pow(raio,2)


if __name__ == '__main__':
    print(calcula_area(int(input())))
