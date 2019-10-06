#include <stdio.h>

int main() {

    int N, i = 1;

    while (1) {

        scanf("%d", &N);

        if (N == 0) {
            break;
        }
        
        for (i; i <= N; i++) {
            if (i == N) {
                printf("%d\n", i);
                break;
            }
            printf("%d ", i);
        }
        
        i = 1;
    }

    return 0;

}