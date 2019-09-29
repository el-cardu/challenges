a, b, c = [int(x) for x in input().split()]

if a >= b >= c:
    print(c, b, a, sep='\n')
elif a >= c >= b:
    print(b, c, a, sep='\n')
elif b >= a >= c:
    print(c, a, b, sep='\n')
elif b >= c >= a:
    print(a, c, b, sep='\n')
elif c >= a >= b:
    print(b, a, c, sep='\n')
elif c >= b >= a:
    print(a, b, c, sep='\n')

print('')
print(a, b, c, sep='\n')
