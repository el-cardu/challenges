#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int X;

    while (scanf("%d", &X) != EOF) {
        printf("%d\n", (int) log2(X));
    }

    return 0;
}
