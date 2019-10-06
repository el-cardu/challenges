#include <stdio.h>

int main() {

    int N;
    scanf("%d", &N);

    int X, Y, tmp, somaImpar = 0;

    while (N > 0) {

        scanf("%d %d", &X, &Y);

        if (X > Y) {
            tmp = X;
            X = Y;
            Y = tmp;
        }

        if (X % 2 != 0) {
            X++;
        }

        for (X; X < Y; X++) {
            if (X % 2 != 0) {
                somaImpar += X;
            }
        }
        
        printf("%d\n", somaImpar);

        somaImpar = 0;
        N--;
    }


    return 0;
    
}