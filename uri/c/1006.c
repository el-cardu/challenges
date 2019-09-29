#include <stdio.h>
#define WEIGHT_A 2
#define WEIGHT_B 3
#define WEIGHT_C 5

int main() {
  double A, B, C;
  double MEDIA;
  scanf("%lf %lf %lf\n", &A, &B, &C);

  MEDIA = ((A * WEIGHT_A) + (B * WEIGHT_B) + (C * WEIGHT_C)) / (WEIGHT_A + WEIGHT_B + WEIGHT_C);
  printf("MEDIA = %.1lf\n", MEDIA);
  return 0;
}
