#include <stdio.h>

int main() {

    int N, i = 1;
    scanf("%d", &N);

    for (i; i <= N; i++) {
        if (N % i == 0) {
            printf("%d\n", i);
        }
    }

    return 0;

}