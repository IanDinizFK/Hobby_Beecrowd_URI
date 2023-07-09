#include <stdio.h>
 
int main() {
  int i,x;
  float n1,n2,n3;
  scanf("%d", &x);
  for(i = 0; i < x; i++){
    scanf("%f %f %f", &n1,&n2,&n3);
    printf("%.1f\n", ((n1*2)+(n2*3)+(n3*5))/10);
  }
}
