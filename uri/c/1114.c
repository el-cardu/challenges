#include <stdio.h>

int main() {

    int senha = 2002, palpite;

    while (1) {

        scanf("%d", &palpite);

        if (palpite == 2002) {
            printf("Acesso Permitido\n");
            break;
        }

        printf("Senha Invalida\n");

    }

    return 0;

}