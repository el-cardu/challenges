def swap_case(s):
    swapped_case = ''
    for char in s:
        if char.islower():
            swapped_case += char.upper()
        elif char.isupper():
            swapped_case += char.lower()
        else:
            swapped_case += char
    return swapped_case

if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)
