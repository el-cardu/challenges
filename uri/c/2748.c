#include <stdio.h>

void first_procedure() {
    printf("---------------------------------------\n");
}

void second_procedure() {
    printf("|                                     |\n");
}

int main() {

    //refactor todo
    first_procedure();
    printf("|        Roberto                      |\n");
    second_procedure();
    printf("|        5786                         |\n");
    second_procedure();
    printf("|        UNIFEI                       |\n"); 
    first_procedure();

    return 0;

}