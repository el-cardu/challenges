#include <stdio.h>
#include <math.h>

int main() {

    float dinheiro, moedas;
    double reais;
    scanf("%f", &dinheiro);

    moedas = 100 * modf(dinheiro, &reais);

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100,00\n", (int) reais / 100);
    printf("%d nota(s) de R$ 50,00\n", (int) reais % 100 / 50);
    printf("%d nota(s) de R$ 20,00\n", (int) reais % 100 % 50 / 20);
    printf("%d nota(s) de R$ 10,00\n", (int) reais % 100 % 50 % 20 / 10);
    printf("%d nota(s) de R$ 5,00\n", (int) reais % 100 % 50 % 20 % 10 / 5);
    printf("%d nota(s) de R$ 2,00\n", (int) reais % 100 % 50 % 20 % 10 % 5 / 2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1,00\n", (int) reais % 100 % 50 % 20 % 10 % 5 % 2);
    printf("%d moeda(s) de R$ 0.50\n", (int) moedas % 100 / 50);
    printf("%d moeda(s) de R$ 0.25\n", (int) moedas % 100 % 50 / 25);
    printf("%d moeda(s) de R$ 0.10\n", (int) moedas % 100 % 50 % 25 / 10);
    printf("%d moeda(s) de R$ 0.05\n", (int) moedas % 100 % 50 % 25 % 10 / 5);
    printf("%d moeda(s) de R$ 0.01\n", (int) moedas % 100 % 50 % 25 % 10 % 5);

    return 0;

}