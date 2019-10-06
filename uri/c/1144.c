#include <stdio.h>

int main() {

    int N, i = 1, quadrado, cubo;
    scanf("%d", &N);

    while (i <= N) {
        quadrado = i * i;
        cubo = i * i * i;
        printf("%d %d %d\n", i, quadrado, cubo);
        printf("%d %d %d\n", i, quadrado + 1, cubo + 1);
        i++;
    }

    return 0;

}