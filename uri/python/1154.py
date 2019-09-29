numbers = []
while True:
    n = int(input())
    numbers.append(n)
    if n < 0:
        numbers.pop()
        avg = sum(numbers)/len(numbers)
        print('{:.2f}'.format(avg))
        break
