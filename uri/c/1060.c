#include <stdio.h>

int main() {

    float numeros[7];
    int i, contaPositivos = 0;

    for (i = 0; i < 6; i++) {
        scanf("%f", &numeros[i]);
        if (numeros[i] > 0) {
            contaPositivos++;
        } 
    }

    printf("%d valores positivos\n", contaPositivos);

    return 0;

}