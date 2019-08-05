inputs = []

pares = 0
impares = 0

positivos = 0
negativos = 0

for x in range(5):
    inputs.append(int(input()))

for i in inputs:
    if i % 2 == 0:
        pares += 1
    else: 
        impares += 1
    if i > 0:
        positivos += 1
    elif i < 0:
        negativos += 1

print(pares, 'valor(es) par(es)')
print(impares, 'valor(es) impar(es)')
print(positivos, 'valor(es) positivo(s)')
print(negativos, 'valor(es) negativo(s)')
