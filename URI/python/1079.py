number_inputs = int(input())
inputs = []

for i in range(number_inputs):
    n1, n2, n3 = [float(x) for x in input().split()]
    print('{:.1f}'.format(((2 * n1 + 3 * n2 + 5 * n3) / 10)))
