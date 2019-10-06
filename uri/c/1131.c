#include <stdio.h>

int main() {

    int golsInter, golsGremio, novoJogo = 1;
    int empates = 0, vitoriasGremio = 0, vitoriasInter = 0;

    while(novoJogo) {

        scanf("%d %d", &golsInter, &golsGremio);

        if (golsInter > golsGremio) {
            vitoriasInter++;
        } else if (golsGremio > golsInter) {
            vitoriasGremio++;
        } else {
            empates++;
        }

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &novoJogo);
        if(novoJogo == 2) {
            break;
        }

    }

    int numeroGrenais = vitoriasGremio + vitoriasInter + empates;
    
    printf("%d grenais\n", numeroGrenais);
    printf("Inter:%d\n", vitoriasInter);
    printf("Gremio:%d\n", vitoriasGremio);
    printf("Empates:%d\n", empates);

    if (vitoriasGremio > vitoriasInter) {
        printf("Gremio venceu mais\n");
    } else if (vitoriasInter > vitoriasGremio) {
        printf("Inter venceu mais\n");
    } else {
        printf("Não houve vencedor\n");
    }

    return 0;

}