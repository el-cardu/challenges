M = 1
N = 1
soma = 0

while True:
    
    M, N = [int(x) for x in input().split()]
    
    if M > N:
        M, N = N, M
    if M <= 0 or N <= 0:
        break

    for i in range(M, N+1):
        soma += i
    print('{}'.format(str(list(range(M, N+1)))[1:-1].replace(',', '')), 'Sum={}'.format(soma))
    soma = 0
