#include <stdio.h>
#include <math.h>

int main(void) {
  double a1,a2,a3,a;
  while(scanf("%lf", &a) != EOF){
    a3 = (-a) * a *(3 * (sqrt(3)- 4)+ 2 *M_PI)/3.0;
    a2 = 4*(a*a*(1 - M_PI/4) - (a3)/2);
    a1 = a * a - a2 - a3;
    printf("%.3lf ",a1);
    printf("%.3lf ",a2);
    printf("%.3lf\n",a3);
  }
  return 0;
}
