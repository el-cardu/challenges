array_selection = []

for i in range(100):
    array_selection.append(float(input()))

for p, n in enumerate(array_selection):
    if n <= 10:
        print('A[{0}] = {1:.1f}'.format(p, n))
