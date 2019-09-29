#include <stdio.h>

float abs(float X, float Y) {
    if (X - Y >= 0) {
        return (X - Y);
    } else {
        return (-1) * (X - Y);
    }
}

int main() {

    float A, B, C;
    scanf("%f %f %f", &A, &B, &C);

    if (abs(B, C) < A && A < (B + C) && abs(A, C) < B && B < A + B && abs(A, B) < C && C < A + B) {
        printf("Perimetro = %.1f\n", A + B + C);
    } else {
        printf("Area = %.1f\n", ((A + B) * C / 2));
    }

    return 0;

}