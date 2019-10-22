#include <stdio.h>

int main() {

    int minutes_left, first_gift, second_gift;

    scanf("%d", &minutes_left);
    scanf("%d %d", &first_gift, &second_gift);

    if (first_gift + second_gift <= minutes_left) {
        printf("Farei hoje!\n");
    } else {
        printf("Deixa para amanha!\n");
    }

    return 0;

}