n = int(input())
values = [int(x) for x in input().split()]
lowest = values[0]

for p, value in enumerate(values):
    if value <= lowest:
        lowest = value
        lowest_position = p

print('Menor valor:', lowest)
print('Posicao:', lowest_position)
