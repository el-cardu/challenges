#include <stdio.h>

int main() {

    int X, Y, tmp, contaDivisores = 0;
    scanf("%d", &X);
    scanf("%d", &Y);

    if (X > Y) {
        tmp = X;
        X = Y;
        Y = tmp;
    }

    for (X; X <= Y; X++) {
        if (X % 13 != 0) {
            contaDivisores += X;
        }
    }

    printf("%d\n", contaDivisores);
    return 0;

}