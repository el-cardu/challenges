#include <stdio.h>

int main() {

    int E, D;

    scanf("%d %d",&E, &D);

    if (E > D) {
        printf("Eu odeio a professora!\n");
    } else {

        if (D - E < 3) {
            printf("Parece o trabalho do meu filho!\n");
            D += 2;
            if (D <= 24) {
                printf("TCC Apresentado!\n");
            } else {
                printf("Fail! Entao eh nataaaaal!\n");
            }
        } else {
            printf("Muito bem! Apresenta antes do Natal!\n");
        }

    }

    return 0;
}