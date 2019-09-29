#include <stdio.h>

int main() {

    char name[50];
    double salarioFixo, totalDeVendas;

    scanf("%s", &name);
    scanf("%lf", &salarioFixo);
    scanf("%lf", &totalDeVendas);

    printf("TOTAL = R$ %.2lf\n", totalDeVendas * 0.15 + salarioFixo);

    return 0;

}