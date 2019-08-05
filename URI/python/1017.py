time = int(input())
average_speed = int(input())
km_per_litre = 12

km = average_speed * time
liters = km/km_per_litre

print('{:.3f}'.format(liters))
