#include <stdio.h>

int main() {

    float i = 1, j = 1, soma = 0;

    for (i; i <= 39; i += 2) {
        soma += (i/j);
        j *= 2;
    }

    printf("%.2f\n", soma);

    return 0;

}