#include <stdio.h>

int main() {

    int N, tmp = 0, i = 0, next = 1;
    scanf("%d", &N);

    printf("%d ", i);

    while(N >= 2) {
        
        i = next;
        next += tmp;

        if (N == 2) {
            printf("%d\n", i);
            break;
        }

        printf("%d ", i);
        
        tmp = i;
        N--;
    }

}