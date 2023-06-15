#include <stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
  float a;
  scanf("%f", &a);
  if(a >= 0 && a <= 400){
    printf("Novo salario: %.2f\n", a+(a*15/100));
    printf("Reajuste ganho: %.2f\n", (a*15/100));
    printf("Em percentual: 15 %\n");
  }else if(a > 400 && a <= 800){
    printf("Novo salario: %.2f\n", a+(a*12/100));
    printf("Reajuste ganho: %.2f\n", (a*12/100));
    printf("Em percentual: 1 2%\n");
  }else if(a > 800 && a <= 1200){
    printf("Novo salario: %.2f\n", a+(a*10/100));
    printf("Reajuste ganho: %.2f\n", (a*10/100));
    printf("Em percentual: 10 %\n");
  }else if(a > 1200 && a <= 2000){
    printf("Novo salario: %.2f\n", a+(a*7/100));
    printf("Reajuste ganho: %.2f\n", (a*7/100));
    printf("Em percentual: 7 %\n");
  }else if(a >2000){
    printf("Novo salario: %.2f\n", a+(a*4/100));
    printf("Reajuste ganho: %.2f\n", (a*4/100));
    printf("Em percentual: 4 %\n");
  }
  return 0;
  
}
