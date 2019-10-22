#include <stdio.h>
#include <math.h>

int main() {

    int trials, n, m, potencia, digitos = 0;
    scanf("%d", &trials);

    while (trials > 0) {
        scanf("%d %d", &n, &m);
        digitos = 1 + m * log10(n);
        printf("%d\n", digitos);
        trials--;

    }
    return 0;
}