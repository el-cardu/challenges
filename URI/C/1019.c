#include <stdio.h>

#define SECONDS_IN_HOURS 3600
#define SECONDS_IN_MINUTES 60

int main() {

  int N;
  double hours, minutes, seconds;

  scanf("%d\n", &N);

  hours = (N/SECONDS_IN_HOURS);
  minutes = (N%SECONDS_IN_HOURS)/(SECONDS_IN_MINUTES);
  seconds = (N%60);

  printf("%.0lf:%.0lf:%.0lf\n", hours, minutes, seconds);

  return 0;

}
