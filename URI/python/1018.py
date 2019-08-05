money = int(input())

quantidade_cem_reais = money // 100
quantidade_cinquenta_reais = (money % 100) // 50
quantidade_vinte_reais = ((money % 100) % 50) // 20
quantidade_dez_reais = (((money % 100) % 50) % 20) // 10
quantidade_cinco_reais = ((((money % 100) % 50) % 20) % 10) // 5
quantidade_dois_reais = (((((money % 100) % 50) % 20) % 10) % 5) // 2
quantidade_um_real = (((((money % 100) % 50) % 20) % 10) % 5) % 2

print(money)
print('{} nota(s) de R$ 100,00'.format(quantidade_cem_reais))
print('{} nota(s) de R$ 50,00'.format(quantidade_cinquenta_reais))
print('{} nota(s) de R$ 20,00'.format(quantidade_vinte_reais))
print('{} nota(s) de R$ 10,00'.format(quantidade_dez_reais))
print('{} nota(s) de R$ 5,00'.format(quantidade_cinco_reais))
print('{} nota(s) de R$ 2,00'.format(quantidade_dois_reais))
print('{} nota(s) de R$ 1,00'.format(quantidade_um_real))
