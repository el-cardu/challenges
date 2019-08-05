def is_armstrong_number(number):
    number_of_digits = len(str(number))
    armstrong_number = 0

    for digit in str(number):
        armstrong_number += int(digit) ** number_of_digits

    if armstrong_number == number:
        return True
    else:
        return False
