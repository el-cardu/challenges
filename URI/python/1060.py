inputs = []

for i in range(6): 
	inputs.append(float(input()))

positivos = len([x for x in inputs if x > 0])
print(positivos, 'valores positivos')
