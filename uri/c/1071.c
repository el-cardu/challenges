#include <stdio.h>

int main() {

    int X, Y, tmp, somaImpares = 0;
    scanf("%d\n%d", &X, &Y);

    if (X > Y) {
        tmp = Y;
        Y = X;
        X = tmp;
    }

    if (X % 2 != 0) {
        X++;
    } 

    for (X; X < Y; X++) {
        if (X % 2 != 0) {
            somaImpares += X;
        }
    }

    printf("%d\n", somaImpares);
    return 0;

}