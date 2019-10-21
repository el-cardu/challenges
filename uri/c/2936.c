#include <stdio.h>
#define CURUPIRA 300
#define BOITATA 1500
#define BOTO 600
#define MAPINGUARI 1000
#define IARA 150
#define CHICA 225

int main() {

    int p1, p2, p3, p4, p5, soma = 0;

    scanf("%d", &p1);
    scanf("%d", &p2);
    scanf("%d", &p3);
    scanf("%d", &p4);
    scanf("%d", &p5);

    soma = (CURUPIRA * p1) + (BOITATA * p2) + (BOTO * p3) + (MAPINGUARI * p4) + (IARA * p5) + CHICA;
    printf("%d\n", soma);

    return 0;

}