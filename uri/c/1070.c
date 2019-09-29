#include <stdio.h>

int main() {

    int X, i;
    scanf("%d", &X);
    i = X;

    for (i; i < X + 13; i++) {
        if (i % 2 != 0) {
            printf("%d\n", i);
        }
    }

    return 0;

}