N1, N2, N3, N4 = [float(x) for x in input().split()]

media = (2 * N1 + 3 * N2 + 4 * N3 + N4) / 10
print('Media: {:.1f}'.format(media))

if media < 5:
    print('Aluno reprovado.')
elif media > 7:
    print('Aluno aprovado.')
else:
    print('Aluno em exame.')
    exame = float(input())
    print('Nota do exame: {:.1f}'.format(exame))
    media_final = (exame + media) / 2
    if media_final >= 5:
        print('Aluno aprovado.')
    else: 
        print('Aluno reprovado.')
    print('Media final: {:.1f}'.format(media_final))
