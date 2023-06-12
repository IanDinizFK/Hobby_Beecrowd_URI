#include <stdio.h>

int main(void) {
  int X;
  float Y;
  scanf("%d\n", &X);
  scanf("%f\n" , &Y);
  printf("%.3f km/l\n", (X)/Y);
  return 0;
}
