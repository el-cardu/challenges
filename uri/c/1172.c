#include <stdio.h>
#define TAM 10

int main() {

    int i = 0, X[TAM];

    for (i; i <= (TAM - 1); i++) {

        scanf("%d", &X[i]);
        if (X[i] <= 0) {
            X[i] = 1;
        }

        printf("X[%d] = %d\n", i, X[i]);

    }

    return 0;

}