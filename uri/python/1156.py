s = 0
g = 1
for x in range(1, 39, 2):
    s += x/g
    g *= 2

print('{:.2f}'.format(s))
