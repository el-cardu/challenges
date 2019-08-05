#include <stdio.h>

#define ALCOHOL 1
#define GASOLINE 2
#define DIESEL 3
#define END 4

int main() {

    int option;
    int counter_alcohol = 0, counter_gasoline = 0, counter_diesel=0;

    while(1) {

        scanf("%d", &option);

        if (option < 1 || option > 4) {
    	scanf("%d", &option);
        }

        if (option == ALCOHOL) {
        	counter_alcohol++;
        } else if (option == GASOLINE){
        	counter_gasoline++;
        } else if (option == DIESEL) {
            counter_diesel++;
        } else if (option == END){
            break;
        }

    }

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",counter_alcohol);
    printf("Gasolina: %d\n",counter_gasoline);
    printf("Diesel: %d\n",counter_diesel);

    return 0;

}
