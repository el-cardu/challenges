#include <stdio.h>
#define TAM 12

int main() {

    int i, j, tmp = 0;
    float M[TAM][TAM];
    float sum = 0;
    char operation;

    scanf("%c", &operation);

    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            scanf("%f", &M[i][j]);
            if (j - i > 0) {
                tmp++;
                sum += M[i][j];
            }
        }
    }

    if (operation == 'S') {
        printf("%.1f\n", sum);
    } else if (operation == 'M') {
        printf("%.1f\n", sum/(float)tmp);
    }

    return 0;

}