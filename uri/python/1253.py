numero_de_casos = int(input())

for caso in range(numero_de_casos):
    
    palavra = input()
    resposta = ''
    desloca = int(input())

    for letra in palavra:
        tmp = ord(letra) - desloca
        if tmp < ord('A'):
            resposta += chr(tmp + 26)
        else:
            resposta += chr(tmp)
    
    print(resposta)
