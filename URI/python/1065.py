inputs = []
pares = 0

for x in range(5):
    inputs.append(int(input()))

for i in inputs:
    if i % 2 == 0:
        pares += 1

print(pares, 'valores pares')
