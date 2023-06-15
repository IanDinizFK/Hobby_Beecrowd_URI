#include <stdio.h>
#include<math.h>
int main() {
  float x1,x2,y1,y2,p1,p2;
  scanf("%f %f", &x1,&y1);
  scanf("%f %f", &x2,&y2);
  p1 = (x1-x2)*(x1-x2);
  p2 = (y1-y2)*(y1-y2);
  printf("%.4f\n", sqrt(p1+p2));
  return 0;
}
