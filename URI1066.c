#include <stdio.h>
#include <math.h>
int main(){
  int a;
  int i, contp =0,conti=0,contpar=0,contimp=0;
  for(i = 0; i < 5; i++){
    scanf("%d", &a);
    if(a > 0){contp++;}
    else if(a < 0){conti++;}
    if(a%2 == 0 || (abs(a))%2 == 0){contpar++;}
    if(a%2 != 0|| (abs(a))%2 != 0){contimp++;}
  }
  printf("%d valor(es) par(es)\n", contpar);
  printf("%d valor(es) impar(es)\n", contimp);
  printf("%d valor(es) positivo(s)\n", contp);
  printf("%d valor(es) negativo(s)\n", conti);
  return 0;
}
