#include <stdio.h>

int main() {

    int trials, product, qt;
    float price = 0;
    scanf("%d", &trials);

    while (trials > 0) {
        
        scanf("%d %d", &product, &qt);

        if (product == 1001) {
            price += qt * 1.5;
        } else if (product == 1002) {
            price += qt * 2.5;
        } else if (product == 1003) {
            price += qt * 3.5;
        } else if (product == 1004) {
            price += qt * 4.5;
        } else if (product == 1005) {
            price += qt * 5.5;
        }

        trials--;
    }

    printf("%.2f\n", price);

    return 0;

}