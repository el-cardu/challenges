#include <stdio.h>

int main() {

    int b, w, b_even, w_even, two_even, two_odd;
    scanf("%d", &b);
    scanf("%d", &w);
    b_even = (b % 2) == 0;
    w_even = (w % 2) == 0;
    two_even = (b_even && w_even);
    two_odd = (!b_even && !w_even);

    if (two_even || two_odd) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}

