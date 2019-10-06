#include <stdio.h>

int main() {

    int X, i = 1, somaPares = 0;

    while(1) {

        scanf("%d", &X);

        if (X == 0) {
            break;
        }

        if (X % 2 != 0) {
            X++;
        }

        while (i <= 5) {
            if (X % 2 == 0) {
                somaPares += X;
            }
            X += 2;
            i++;
        }

        printf("%d\n", somaPares);
        somaPares = 0;
        i = 1;

    }

    return 0;

}