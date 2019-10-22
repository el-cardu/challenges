#include <stdio.h>

int main() {

    int reminder, password;
    while (scanf("%d", &reminder) != EOF) {
        password = reminder - 1;
        printf("%d\n", password);
    }
    return 0;

}