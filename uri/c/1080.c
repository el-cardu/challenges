#include <stdio.h>

int main() {

    int posicao = 1, N = 100, numero, maior = 0, posicaoMaior = posicao;

    while (posicao <= N) {
        scanf("%d", &numero);
        if (numero > maior) {
            maior = numero;
            posicaoMaior = posicao;
        }
        posicao++;
    }

    printf("%d\n", maior);
    printf("%d\n", posicaoMaior);

    return 0;

}