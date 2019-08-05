maior = 0
for i in range(1,101):
    value = int(input())
    if value > maior:
        maior = value
        posicao = i

print(maior)
print(posicao)
