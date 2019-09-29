employee_number = int(input())
worked_hours_in_a_month = int(input())
money_per_hour = float(input())

salary = worked_hours_in_a_month * money_per_hour

print('NUMBER =', employee_number)
print('SALARY = U$ {:.2f}'.format(salary))
