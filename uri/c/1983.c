#include <stdio.h>

int main() {

    int N, ID;
    int maiorID;
    float nota = 0, maiorNota = 0;

    scanf("%d", &N);

    while (N > 0) {

        if (nota > maiorNota) {
            maiorNota = nota;
            maiorID = ID;
        }

        scanf("%d %f", &ID, &nota);

        N--;
    
    }

    if (nota > maiorNota) {
        maiorNota = nota;
        maiorID = ID;
    }
    
    if (maiorNota >= 8) {
        printf("%d\n", maiorID);
    } else {
        printf("Minimum note not reached\n");
    }

    return 0;

}