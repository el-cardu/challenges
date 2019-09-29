#include <stdio.h>

int main() {

    float numeros[7], media, somaPositivos = 0;
    int i, contaPositivos = 0;

    for (i = 0; i < 6; i++) {
        
        scanf("%f", &numeros[i]);
        
        if (numeros[i] > 0) {
            somaPositivos += numeros[i];
            contaPositivos++;
        }
    
    }

    media = somaPositivos / contaPositivos;

    printf("%d valores positivos\n", contaPositivos);
    printf("%.1f\n", media);

    return 0;

}