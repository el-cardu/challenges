#include <stdio.h>
#include <math.h>

int main() {

    double A, B, C, maior, meio, menor;
    scanf("%lf %lf %lf", &A, &B, &C);

    maior = A;
    meio = B;
    menor = C;

	if (B >= A && B >= C){
		maior = B;
		meio = A;
		menor = C;
	} else {
		maior = C;
		meio = A;
		menor = B;
	}

    A = maior;
    B = meio;
    C = menor;

    if (A >= (B + C)) {
        printf("NAO FORMA TRIANGULO\n");
    } else {

        if (pow(A, 2) == (pow(B,2) + pow(C,2))) {
            printf("TRIANGULO RETANGULO\n");
        } else if (pow(A, 2) > (pow(B,2) + pow(C,2))) {
            printf("TRIANGULO OBTUSANGULO\n");
        } else if (pow(A, 2) < (pow(B,2) + pow(C,2))) {
            printf("TRIANGULO ACUTANGULO\n");
        }

        if (A == B && B == C) {
            printf("TRIANGULO EQUILATERO\n");
        } else if (A == B || A == C || B == C) {
            printf("TRIANGULO ISOSCELES\n");
        }


    }

    return 0;

}