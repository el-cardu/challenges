def media(*notas):
    return sum(notas)/len(notas)

if __name__ == '__main__':
    nota1, nota2, nota3, nota4 = [int(x) for x in input().split()]
    print(media(nota1, nota2, nota3, nota4))
