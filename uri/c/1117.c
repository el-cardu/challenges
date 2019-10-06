#include <stdio.h>

int main() {

    float nota, tmp, media = 0;
    int validas = 1;

    while (validas != 3) {

        scanf("%f", &nota);

        if (nota < 0 || nota > 10) {
            printf("nota invalida\n");
            continue;
        }

        if (validas == 2) {
            media = (tmp + nota) / 2.0;
            printf("media = %.2f\n", media);
        }
        
        tmp = nota;
        validas++;

    }


    return 0;

}