A, B, C = [float(x) for x in input().split()]
pi = 3.14159

triangle = (A * C) / 2
circle = pi * C ** 2
trapezium = ((A + B) * C) / 2
square = B ** 2
rectangle = A * B

print('TRIANGULO: {:.3f}'.format(triangle))
print('CIRCULO: {:.3f}'.format(circle))
print('TRAPEZIO: {:.3f}'.format(trapezium))
print('QUADRADO: {:.3f}'.format(square))
print('RETANGULO: {:.3f}'.format(rectangle))
