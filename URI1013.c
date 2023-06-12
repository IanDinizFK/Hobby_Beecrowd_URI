#include <stdio.h>
#include<math.h>
#include<stdlib.h>

int main(void) {
  int a,b,c,maiorAB,maiorRC;
  scanf("%d\n", &a);
  scanf("%d\n", &b);
  scanf("%d\n", &c);
  maiorAB = (a+b+(abs(a-b)))/2;
  maiorRC = (maiorAB+c+(abs(maiorAB-c)))/2;
  printf("%d eh o maior\n", maiorRC);
  return 0;
}
