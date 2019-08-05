lados = [float(x) for x in input().split()]
lados.sort()
lados = lados[::-1]
a, b, c = list(lados)

if a >= b + c:
    print('NAO FORMA TRIANGULO')
else:
    if a ** 2 == b ** 2 + c ** 2:
        print('TRIANGULO RETANGULO')
    if a ** 2 > b ** 2 + c ** 2:
        print('TRIANGULO OBTUSANGULO')
    if a ** 2 < b ** 2 + c ** 2:
        print('TRIANGULO ACUTANGULO')
    if a == b == c:
        print('TRIANGULO EQUILATERO')
    if a == b != c or a != b == c or a == c != b: 
        print('TRIANGULO ISOSCELES')
