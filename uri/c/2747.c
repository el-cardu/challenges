#include <stdio.h>

void first_procedure() {
    printf("---------------------------------------\n");
}

void second_procedure() {
    printf("|                                     |\n");
}

int main() {

    int i;
    
    first_procedure();
    for (i = 1; i <= 5; i++) {
        second_procedure();
    }
    first_procedure();

    return 0;

}