#include <stdio.h>

int main() {

    int N, X, Y, contaImpares = 0, somaImpares = 0, i = 1;
    scanf("%d", &N);

    while (N > 0) {

        scanf("%d %d", &X, &Y);
        
        if (X % 2 == 0) {
            i = X + 1;
        } else {
            i = X;
        }

        while (i > 0 || (-1) * i > 0 ) {

            if (contaImpares == Y) {
                break;
            }

            if (i % 2 != 0) {
                contaImpares++;
                somaImpares += i;
            }

            i++;

            if (i == 0) {
                i++;
            }
            
        }

        printf("%d\n", somaImpares);
        contaImpares = 0;
        somaImpares = 0;

        N--;

    }

    return 0;

}