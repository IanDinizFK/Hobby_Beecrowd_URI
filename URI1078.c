#include <stdio.h>
 
int main() {
  int i,x;
  scanf("%d", &x);
  for(i = 1; i <= 10; i++){
    printf("%d x %d = %d\n",i,x, i*x);
  }
}
