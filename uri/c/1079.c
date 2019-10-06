#include <stdio.h>

int main() {

    int N;
    scanf("%d", &N);

    float nota1, nota2, nota3, media;

    while (N > 0) {

        scanf("%f %f %f", &nota1, &nota2, &nota3);

        media = (0.2 * nota1) + (0.3 * nota2) + (0.5 * nota3);

        printf("%.1f\n", media);
        N--;

    }

    return 0;

}