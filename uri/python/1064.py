inputs = []
total = 0

for i in range(6):
    inputs.append(float(input()))

positivos = [x for x in inputs if x > 0]

print(len(positivos), 'valores positivos')

for positivo in positivos:
    total += positivo

avg = total/len(positivos)

print('{:.1f}'.format(avg))
