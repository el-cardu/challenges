X = int(input())
Z = int(input())
counter = 1
sum = X

while Z <= X:
    Z = int(input())

while sum < Z:
    sum += X + counter
    counter += 1

print(counter)
