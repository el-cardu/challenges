#include <stdio.h>

int main() {

    int V, N, resultado, i = 1;
    float tmp;
    scanf("%d %d", &V, &N);

    for (i; i <= 9; i++) {
        resultado = (i * V * N) / 10;
        if (i == 9) {
            if ((i * V * N) % 10) {
                printf("%d\n", resultado+1);
            } else {
                printf("%d\n", resultado);
            }
        } else {
            if ((i * V * N) % 10) {
                printf("%d ", resultado+1);
            } else {
                printf("%d ", resultado);
            }
        }
    } 

    return 0;
    
}
