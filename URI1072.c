#include <stdio.h>
 
int main() {
  int x,y,i,a,in=0;
  int lista[11] = {10,11,12,13,14,15,16,17,18,19,20};
  scanf("%d", &x);
  for(y = 0; y < x; y++){
    scanf("%d",&a);
    for(i = 0; i <= 10; i++){
      if(a == lista[i]){in++;}
    }
  }
  printf("%d in\n", in);
  printf("%d out\n", abs(x-in));
}
