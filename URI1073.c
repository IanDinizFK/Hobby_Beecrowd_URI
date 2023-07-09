#include <stdio.h>
 
int main() {
  int i,x;
  scanf("%d", &x);
  for(i = 1; i < 999999; i++){
    if(i%2 == 0 && i != x && i){
      printf("%d^2 = %d\n", i, i*i);
    }else if(i == x){
      printf("%d^2 = %d\n", i, i*i);
      break;
    }
  }
}
