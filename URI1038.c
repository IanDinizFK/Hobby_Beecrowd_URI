#include <stdio.h>
int main(){
  int op,qt;
  float valor;
  scanf("%d %d", &op,&qt);
  switch(op){
    case 1:
      valor = 4.00*qt;
      break;
    case 2:
      valor = 4.50*qt;
      break;
    case 3:
      valor = 5.00*qt;
      break;
    case 4:
      valor = 2.00*qt;
      break;
    case 5:
      valor = 1.50*qt;
      break;
  }
  printf("Total: R$ %.2f\n", valor);
  
  return 0;
}
