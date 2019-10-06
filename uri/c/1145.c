#include <stdio.h>

int main() {

    int X, Y, i = 1;
    scanf("%d %d", &X, &Y);

    while(i <= Y) {
        if (i % X == 0) {
            printf("%d\n", i);
            i += 1;
            continue;
        }
        printf("%d ", i);
        i += 1;
    }

    return 0;

}