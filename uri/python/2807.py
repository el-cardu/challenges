last = 1
next_ = 1
fib = [1]
n = int(input())

for _ in range(n-1):
    last, next_ = next_, last + next_
    fib.append(last)

for i, el in enumerate(reversed(fib)):
    if i == (len(fib) - 1):
        print(el)
        break
    print(el, end=' ')
