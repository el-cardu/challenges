def calcula_salario(horas_trabalhadas, salario_por_hora):
    return horas_trabalhadas * salario_por_hora


if __name__ == '__main__':
    horas_trabalhadas, salario_por_hora = [float(x) for x in input().split()]
    print(calcula_salario(horas_trabalhadas, salario_por_hora))