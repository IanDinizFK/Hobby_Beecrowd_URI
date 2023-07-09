#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int a;
  scanf("%d", &a);
  int b[a];
  int i;
  for (i = 0; i < a; i++){
    if(i <= 1){
      printf("%d ", i);
      b[i] = i;
    }else if(i < a && i != a-1){
      b[i] = b[i-1] + b[i-2];
      printf("%d ", b[i]);
    }else{
      b[i] = b[i-1] + b[i-2];
      printf("%d\n", b[i]);
    }
  }
}
