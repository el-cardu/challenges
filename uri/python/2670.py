cima = int(input())
meio = int(input())
baixo = int(input())

proposta_cima = (2 * meio) + (4 * baixo)
proposta_meio = (2 * cima) + (2 * baixo)
proposta_baixo = (2 * meio) + (4 * cima)

if (proposta_cima <= proposta_meio <= proposta_baixo) or (proposta_cima <= proposta_baixo <= proposta_meio):
    print(proposta_cima)
elif (proposta_meio <= proposta_cima <= proposta_baixo) or (proposta_meio <= proposta_baixo <= proposta_cima):
    print(proposta_meio)
else:
    print(proposta_baixo)