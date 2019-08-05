#include <stdio.h>

#define WEIGHT_GRADE_A 3.5
#define WEIGHT_GRADE_B 7.5

int main() {

	double A, B, MEDIA;
	scanf("%lf %lf", &A, &B);

	MEDIA = ((A * WEIGHT_GRADE_A) + (B * WEIGHT_GRADE_B))/11;

	printf("MEDIA = %.5lf\n", MEDIA);

	return 0;

}
