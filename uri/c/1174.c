#include <stdio.h>
#define TAM 3

int main() {

    float n, A[TAM];
    int i = 0;

    for (i; i <= (TAM - 1); i++) {
        scanf("%f", &n);
        A[i] = n;
    }

    for (i = 0; i <= (TAM - 1); i++) {
        if (A[i] <= 10) {
            printf("A[%d] = %.1f\n", i, A[i]);
        }
    }

    return 0;

}