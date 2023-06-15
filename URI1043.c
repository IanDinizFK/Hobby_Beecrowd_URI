#include <stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
  float a,b,c;
  scanf("%f %f %f", &a,&b,&c);
  if(fabs(a-b) < c && c < a+b){
    printf("Perimetro = %.1f\n", a+b+c);
  }else{
    printf("Area = %.1f\n", ((a+b)*c)/2);
  }
  return 0;
  
}
