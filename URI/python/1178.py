number = int(input())
metades = 100 * [None]
for i in range(100):
    metades[i] = number
    number /= 2
    number = int(number)
print(metades)