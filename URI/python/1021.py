money = float(input())

notas, moedas = divmod(money, 1)

moedas *= 100 
notas, moedas = round(notas), round(moedas)

print('NOTAS:')
print(notas // 100, 'nota(s) de R$ 100.00')
print((notas % 100) // 50, 'nota(s) de R$ 50.00')
print(((notas % 100) % 50) // 20, 'nota(s) de R$ 20.00')
print((((notas % 100) % 50) % 20) // 10, 'nota(s) de R$ 10.00')
print(((((notas % 100) % 50) % 20) % 10) // 5, 'nota(s) de R$ 5.00')
print((((((notas % 100) % 50) % 20) % 10) % 5) // 2, 'nota(s) de R$ 2.00')
print('MOEDAS:')
print((((((notas % 100) % 50) % 20) % 10) % 5) % 2, 'moeda(s) de R$ 1.00')
print((moedas % 100) // 50, 'moeda(s) de R$ 0.50')
print(((moedas % 100) % 50) // 25, 'moeda(s) de R$ 0.25')
print((((moedas % 100) % 50) % 25) // 10, 'moeda(s) de R$ 0.10')
print(((((moedas % 100) % 50) % 25) % 10) // 5, 'moeda(s) de R$ 0.05')
print(((((moedas % 100) % 50) % 25) % 10) % 5, 'moeda(s) de R$ 0.01')
