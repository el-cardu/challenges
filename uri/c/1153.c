#include <stdio.h>

int main() {

    int N, i = 0, fatorial = 1;
    scanf("%d", &N);

    while (i < N) {
        fatorial *= (N - i);
        i++;
    }

    printf("%d\n", fatorial);

    return 0;

}