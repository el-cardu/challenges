#include <stdio.h>
#include <math.h>

int main() {

    float A, B, C, delta, r1, r2;
    scanf("%f %f %f", &A, &B, &C);

    delta = (B * B) - (4 * A * C);

    if (A == 0 || delta < 0) {
        printf("Impossivel calcular\n");
    } else {
        r1 = (-B + sqrt(delta)) / (2 * A);
        r2 = (-B - sqrt(delta))/ (2 * A);
        printf("R1 = %.5f\n", r1);
        printf("R2 = %.5f\n", r2);
    }

    return 0;

}