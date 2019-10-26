#include <stdio.h>
#define TAM 12

int main() {

    int i, j, line;
    float M[TAM][TAM];
    float sum;
    char operation;

    scanf("%d %c", &line, &operation);

    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            scanf("%f", &M[i][j]);
            if (i == line) {
                sum += M[i][j];
            }
        }
    }

    if (operation == 'S') {
        printf("%.1f\n", sum);
    } else if (operation == 'M') {
        printf("%.1f\n", sum/TAM);
    }

    return 0;

}