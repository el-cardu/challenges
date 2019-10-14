#include <stdio.h>
#define TAM 10

int main() {

    int n, i = 0, N[TAM];
    scanf("%d", &n);
    N[0] = n;

    for (i; i <= (TAM - 1); i++) {
        N[i] = n;
        printf("N[%d] = %d\n", i, N[i]);
        n = 2 * n;
    }

    return 0;

}