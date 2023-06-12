#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
  int a,b,c;
  scanf("%d\n",&a);
  for (b = 0; a != b; b++){
    scanf("%d\n",&c);
    if(c > 2015){
      printf("%d A.C.\n", abs(c-2014));
    }else if(c == 2015){
      printf("%d A.C.\n", 1);
    }else{
      printf("%d D.C.\n", abs(2015-c));
    }
  }
  return 0;
}
