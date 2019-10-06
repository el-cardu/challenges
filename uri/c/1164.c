#include <stdio.h>

int main() {

    int i = 1, N, X, somaDivisores = 0;
    scanf("%d", &N);

    while (N > 0) {

        scanf("%d", &X);

        for (i; i < X; i++) {
            if (X % i == 0) {
                somaDivisores += i;
            }
        }

        if (somaDivisores == X) {
            printf("%d eh perfeito\n", X);
        } else {
            printf("%d nao eh perfeito\n", X);
        }

        somaDivisores = 0;
        i = 1;
        N--;
    }

    return 0;

}