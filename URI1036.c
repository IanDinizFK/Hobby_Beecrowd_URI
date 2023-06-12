#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
  double a,b,c,delta;
  scanf("%lf\n", &a);
  scanf("%lf\n", &b);
  scanf("%lf\n", &c);
  delta = ((b*b)-(4*a*c));
  if (delta < 0 || a == 0 ){
    printf("Impossivel calcular\n");
  }
  else{
    printf("R1 = %.5f\n", (-b + sqrt(delta))/(2*a));
    printf("R2 = %.5f\n", (-b - sqrt(delta))/(2*a));
  }
  return 0;
}
