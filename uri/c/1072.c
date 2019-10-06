#include <stdio.h>

int main() {

    int N, i, in = 0, out = 0;
    scanf("%d", &N);

    while (N > 0) {

        scanf("%d", &i);

        if (i >= 10 && i <= 20) {
            in++;
        } else {
            out++;
        }

        N--;

    }

    printf("%d in\n", in);
    printf("%d out\n", out);

    return 0;

}