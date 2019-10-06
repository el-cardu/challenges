#include <stdio.h>

int main() {

    float salario;
    float reajuste, novoSalario, reajustePercentual;
    int percentual;

    scanf("%f", &salario);

    if (salario >= 0 && salario <= 400.00) {
        percentual = 15;
    } else if (salario >= 400.01 && salario <= 800.00) {
        percentual = 12;
    } else if (salario >= 800.01 && salario <= 1200.00) {
        percentual = 10;
    } else if (salario >= 1200.01 && salario <= 2000.00) {
        percentual = 7;
    } else if (salario > 2000) {
        percentual = 4;
    }

    reajustePercentual = (float) percentual / 100.0;
    reajuste = (float) (reajustePercentual * salario);
    novoSalario = salario + reajuste;

    printf("Novo salario: %.2f\n", novoSalario);
    printf("Reajuste ganho: %.2f\n", reajuste);
    printf("Em percentual: %d %\n", percentual);

    return 0;

}