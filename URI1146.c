#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
  int n,i;
  scanf("%d", &n);
  while (n != 0){
    for (i = 0; i < n; i++){
      if (i+1 < n){
        printf("%d ", i+1);
      }
      else{
        printf("%d", i+1); 
      }  
    }
  printf("\n");
  scanf("%d", &n);
  }
 
  return 0;
}
