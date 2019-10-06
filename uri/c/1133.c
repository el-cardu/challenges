#include <stdio.h>

int main() {

    int X, Y, tmp;
    scanf("%d %d", &X, &Y);

    if (X > Y) {
        tmp = X;
        X = Y;
        Y = tmp;
    }

    if (X % 5 == 2 || X % 5 == 3) {
        X++;
    }

    for(X; X < Y; X++) {
        if (X % 5 == 2 || X % 5 == 3) {
            printf("%d\n", X);
        }
    }

}