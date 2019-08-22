def converte_para_celsius(farenheit):
    return (5 * (farenheit - 32)) / 9


if __name__ == '__main__':
    print(converte_para_celsius(int(input())))
