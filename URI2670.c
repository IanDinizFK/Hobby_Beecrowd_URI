#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
  int a1,a2,a3,op1,op2,op3,menorAB,menor;
  scanf("%d\n",&a1);
  scanf("%d\n",&a2);
  scanf("%d\n",&a3);
  op1 = (a2*2)+(a3*4);
  op2 = (a1*2)+(a3*2);
  op3 = (a1*4)+(a2*2);
  if(op1 <= op2 && op1 <= op3){
    printf("%d\n",op1);   
    }
  else if(op1 >= op2 && op2 <= op3){
    printf("%d\n", op2);
  }
  else if(op1 >= op3 && op2 >= op3){
    printf("%d\n", op3);
  }else{
    printf("%d\n", op3);
  }
  return 0;
}
