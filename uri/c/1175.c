#include <stdio.h>
#define TAM 10

int main() {

    int i = 0, n, tmp, N[TAM];

    for (i; i <= (TAM - 1); i++) {
        scanf("%d", &n);
        N[i] = n;
    }

    for (i = 0; i <= (TAM - 1)/2; i++) {
        tmp = N[i];
        N[i] = N[TAM - i - 1];
        N[TAM - i - 1] = tmp;
    }

    for (i = 0; i <= (TAM - 1); i++) {
        printf("N[%d] = %d\n", i, N[i]);
    }

    return 0;

}