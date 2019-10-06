#include <stdio.h>

int main() {

    int N;
    scanf("%d", &N);
    int X, Y;
    float divisao;

    while (N > 0) {

        scanf("%d %d", &X, &Y);

        if (Y == 0) {
            printf("divisao impossivel\n");
            N--;
            continue;
        }

        divisao = (float) X / (float) Y;

        printf("%.1f\n", divisao);

        N--;
    }

    return 0;

}