#include <stdio.h>

int main() {

    int N, X, i, contaDivisores = 0;
    scanf("%d", &N);

    while (N > 0) {

        scanf("%d", &X);

        for (i = 1; i <= X; i++) {
            if (X % i == 0) {
                contaDivisores++;
            }
        }

        if (contaDivisores == 2) {
            printf("%d eh primo\n", X);
        } else {
            printf("%d nao eh primo\n", X);
        }

        contaDivisores = 0;
        N--;

    }

    return 0;

}