tests = int(input())
inputs = []

for i in range(tests):
    inputs.append(int(input()))

in_interval = 0
out_interval = 0

for x in inputs:
    if 10 <= x <= 20:
        in_interval += 1
    else:
        out_interval += 1

print(in_interval, 'in')
print(out_interval, 'out')
