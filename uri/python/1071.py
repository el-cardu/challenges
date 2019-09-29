X = int(input())
Y = int(input())
sum = 0

if X > Y:
    X, Y = Y, X

for i in range(X+1, Y):
    if i % 2 != 0: 
        sum += i

print(sum)
