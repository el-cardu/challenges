name = input()
salary = float(input())
total_sold = float(input())

salary_with_bonus = salary + 0.15 * total_sold

print('TOTAL = R$ {:.2f}'.format(salary_with_bonus))
