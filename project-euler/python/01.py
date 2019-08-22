def sum_of_multiples_by(n, divisor):
    last = n // divisor
    return divisor * (last/2) * (last + 1)


sum_of_multiples = sum_of_multiples_by(999, 3) + sum_of_multiples_by(999, 5) - sum_of_multiples_by(999, 15)
print(int(sum_of_multiples))
