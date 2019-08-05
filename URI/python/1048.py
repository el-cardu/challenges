salario = float(input())

if salario <= 400:
    percentual = 15 / 100
elif salario <= 800:
    percentual = 12 / 100
elif salario <= 1200:
    percentual = 10 / 100
elif salario <= 2000:
    percentual = 7 / 100
elif salario > 2000:
    percentual = 4 / 100    

reajuste = percentual * salario
novo_salario = salario + reajuste

print('Novo salario: {:.2f}'.format(novo_salario))
print('Reajuste ganho: {:.2f}'.format(reajuste))
print('Em percentual: {} %'.format(int(100 * percentual)))