import math
n = int(input())

menor = n / math.log(n) 
maior = 1.25506 * menor
print('{:.1f} {:.1f}'.format(menor, maior))
