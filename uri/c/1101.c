#include <stdio.h>

int main() {

    int M, N, tmp, soma = 0;

    while(1) {

        scanf("%d %d", &M, &N);
        if (M <= 0 || N <= 0) {
            break;
        }

        if (M > N) {
            tmp = M;
            M = N;
            N = tmp;
        }

        for (M; M <= N; M++) {
            printf("%d ", M);
            soma += M;
        }

        printf("Sum=%d\n", soma);
        soma = 0;

    }

    return 0;

}