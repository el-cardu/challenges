code1, units1, price1 = [float(x) for x in input().split()]
code2, units2, price2 = [float(x) for x in input().split()]

valor_a_pagar = units1 * price1 + units2 * price2

print('VALOR A PAGAR: R$ {:.2f}'.format(valor_a_pagar))
