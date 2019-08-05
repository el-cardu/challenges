#include <stdio.h>

#define RATIO (4.0/3)
#define PI 3.14159

int main() {

  double R, VOLUME;
  scanf("%lf\n", &R);

  VOLUME = RATIO * PI * R * R * R;
  printf("VOLUME = %.3lf\n", VOLUME);

  return 0;

}
