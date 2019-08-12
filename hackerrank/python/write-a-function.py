def is_leap(year):
    leap = False

    divided_by_four = year % 4 == 0
    divided_by_hundred = year % 100 == 0
    divided_by_4hundred = year % 400 == 0

    if (divided_by_four and not divided_by_hundred) or divided_by_4hundred:
        leap = True
    return leap

year = int(input())
print(is_leap(year))
