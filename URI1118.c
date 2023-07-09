#include <stdio.h>
int main(){
  int x,y;
  float n1,n2;
  int op = 1;
  while(op == 1 && op != 2){
      op = 0;
      scanf("%f", &n1);
      while(n1 < 0 || n1 > 10){
          printf("nota invalida\n");
          scanf("%f", &n1);
      }
      scanf("%f", &n2);
       while(n2 < 0 || n2 > 10){
          printf("nota invalida\n");
          scanf("%f", &n2);
      }
      printf("media = %.2f\n", (n1+n2)/2);
      
      printf("novo calculo (1-sim 2-nao)\n");
      scanf("%d", &op);
      while(op != 1 && op > 2){
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &op);
      }
      
      if(op == 2){
          return 0;
      }
  }
 }
