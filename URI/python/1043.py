A, B, C = [float(x) for x in input().split()]

if abs(B - C) < A < B + C and abs(A - C) < B < A + B and abs(A - B) < C < A + B:
    perimetro = A + B + C
    print('Perimetro = {:.1f}'.format(perimetro))
else:
    area = (A + B) * C / 2
    print('Area = {:.1f}'.format(area))
