#include <stdio.h>

int main() {

    int i, N = 1000, menor = 1000, menor_posicao;
    scanf("%d", &N);

    int X[N];

    for (i = 0; i < N; i++) {

        scanf("%d", &X[i]);

        if (X[i] < menor) {
            menor = X[i];
            menor_posicao = i;
        }
    }

    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", menor_posicao);

    return 0;

}
