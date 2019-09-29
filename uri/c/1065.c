#include <stdio.h>

int main() {

    int numeros[6], contaPares = 0, i;

    for (i = 0; i < 5; i++) {
        scanf("%d", &numeros[i]);
        if (numeros[i] % 2 == 0) {
            contaPares++;
        }
    }

    printf("%d valores pares\n", contaPares);

    return 0;

}