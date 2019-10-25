    #include <stdio.h>

    int main() {

        int saques = 0, bloqueios = 0, ataques = 0;
        int saquesCertos = 0, bloqueiosCertos = 0, ataquesCertos = 0;
        float porcentagemSaque, porcentagemBloqueio, porcentagemAtaque;
        int i, jogadores, todos[3], certos[3];
        char nome[40];

        scanf("%d", &jogadores);

        while (jogadores > 0) {
            scanf("%s", nome);
            for (i = 0; i <= 2; i++) {
                scanf("%d", &todos[i]);
                if (i == 0) {
                    saques += todos[i];
                } else if (i == 1) {
                    bloqueios += todos[i];
                } else if (i == 2) {
                    ataques += todos[i];
                }
            }
            for (i = 0; i <= 2; i++) {
                scanf("%d", &certos[i]);
                if (i == 0) {
                    saquesCertos += certos[i];
                } else if (i == 1) {
                    bloqueiosCertos += certos[i];
                } else if (i == 2) {
                    ataquesCertos += certos[i];
                }
            }
            jogadores--;
        }

        porcentagemSaque = 100 * ((float) saquesCertos/saques);
        porcentagemBloqueio = 100 * ((float) bloqueiosCertos/bloqueios);
        porcentagemAtaque = 100 * ((float) ataquesCertos/ataques);

        printf("Pontos de Saque: %.2f %%", porcentagemSaque);
        printf(".\n");
        printf("Pontos de Bloqueio: %.2f %%", porcentagemBloqueio);
        printf(".\n");
        printf("Pontos de Ataque: %.2f %%", porcentagemAtaque);
        printf(".\n");

        return 0;

    } 