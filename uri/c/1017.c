#include <stdio.h>
#define CAR_KM_L 12.0

int main() {

    int time, averageSpeed;
    float liters;

    scanf("%d", &time);
    scanf("%d", &averageSpeed);

    liters = (time * averageSpeed) / CAR_KM_L;

    printf("%.3f\n", liters); 

    return 0;

}