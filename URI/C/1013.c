#include <stdio.h>

int absModificado(int a, int b) {

    int numero = a - b;

    if (numero >= 0) {
        return (a + b + numero) / 2;
    } else {
        return ((a + b + numero * (-1)) / 2);
    }

}

int main() {

    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    int maior = absModificado(A, B);
    maior = absModificado(maior, C);

    printf("%d eh o maior\n", maior);

    return 0;

}