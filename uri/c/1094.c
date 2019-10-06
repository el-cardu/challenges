#include <stdio.h>

int main() {

    int N, amount, totalSapos = 0, totalRatos = 0, totalCoelhos = 0, total = 0;
    char tipo;
    scanf("%d", &N);

    for(N; N > 0; N--) {
        scanf("%d %c", &amount, &tipo);
        
        if (tipo == 'C') {
            totalCoelhos += amount;
        } else if (tipo == 'R') {
            totalRatos += amount;
        } else if (tipo == 'S') {
            totalSapos += amount;
        }

    }

    total = totalCoelhos + totalRatos + totalSapos;

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", totalCoelhos);
    printf("Total de ratos: %d\n", totalRatos);
    printf("Total de sapos: %d\n", totalSapos);
    printf("Percentual de coelhos: %.2f \%\n", 100.0 * totalCoelhos/total);
    printf("Percentual de ratos: %.2f \%\n", 100.0 * totalRatos/total);
    printf("Percentual de sapos: %.2f \%\n", 100.0 * totalSapos/total);


    return 0;

}