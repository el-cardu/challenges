#include <stdio.h>

int main() {

    int numeroEmpregado, horasTrabalhadas;
    float salarioPorHora, salario;

    scanf("%d", &numeroEmpregado);
    scanf("%d", &horasTrabalhadas);
    scanf("%f", &salarioPorHora);

    salario = horasTrabalhadas * salarioPorHora;

    printf("NUMBER = %d\n", numeroEmpregado); 
    printf("SALARY = U$ %.2f\n", salario); 

    return 0;

}