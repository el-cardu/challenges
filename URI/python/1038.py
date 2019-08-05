codigo, quantidade = [int(x) for x in input().split()]

if codigo == 1:
    total = quantidade * 4
    print('Total: R$ {:.2f}'.format(total))
elif codigo == 2:
    total = quantidade * 4.5
    print('Total: R$ {:.2f}'.format(total))
elif codigo == 3:
    total = quantidade * 5
    print('Total: R$ {:.2f}'.format(total))
elif codigo == 4:
    total = quantidade * 2
    print('Total: R$ {:.2f}'.format(total))
elif codigo == 5:
    total = quantidade * 1.5
    print('Total: R$ {:.2f}'.format(total))
