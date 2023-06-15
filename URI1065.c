#include <stdio.h>
 
int main() {
  
  int a;
  int i, contp =0,conti=0,contpar=0,contimp=0;
  for(i = 0; i < 5; i++){
    scanf("%d", &a);
    if(a%2 == 0 || (abs(a))%2 == 0){contpar++;}
  }
  printf("%d valores pares\n", contpar);
    return 0;
}
