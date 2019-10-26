#include <stdio.h>
#define TAM 12

int main() {

    int i, j, tmp = 0;
    double M[TAM][TAM];
    double sum = 0;
    char operation;

    scanf("%c", &operation);

    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            scanf("%lf", &M[i][j]);
            if ((i + j > 11) && (i > j)) {
                tmp++;
                sum += M[i][j];
            }
        }
    }

    if (operation == 'S') {
        printf("%.1lf\n", sum);
    } else if (operation == 'M') {
        printf("%.1lf\n", sum/(double) tmp);
    }

    return 0;

}