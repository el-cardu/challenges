money = float(input())

if 0 <= money <= 2000:
    print('Isento')
elif 2000 < money <= 3000:
    money -= 2000
    tax = 8/100
    rombus = money * tax
    print('R$ {:.2f}'.format(rombus))
elif 3000 < money <= 4500:
    money -= 2000
    tax = 8/100
    
    print('R$ {:.2f}'.format(rombus))