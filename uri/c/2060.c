#include <stdio.h>

int main() {

    int tamanho, i;
    int multiplos2 = 0, multiplos3 = 0, multiplos4 = 0, multiplos5 = 0;
    scanf("%d", &tamanho);

    int numeros[tamanho];

    for (i = 0; i <= (tamanho - 1); i++) {
        scanf("%d", &numeros[i]);
        if (numeros[i] % 2 == 0) {
            multiplos2++;
        } 
        if (numeros[i] % 3 == 0) {
            multiplos3++;
        } 
        if (numeros[i] % 4 == 0) {
            multiplos4++;
        } 
        if (numeros[i] % 5 == 0) {
            multiplos5++;
        }
    }

    printf("%d Multiplo(s) de 2\n", multiplos2);
    printf("%d Multiplo(s) de 3\n", multiplos3);
    printf("%d Multiplo(s) de 4\n", multiplos4);
    printf("%d Multiplo(s) de 5\n", multiplos5);

    return 0;

}