#include <stdio.h>
int main(){
  float salario;
  scanf("%f", &salario);
  if(salario > 0  && salario <= 2000){
    printf("Isento\n");
  }else if(salario > 2000  && salario <= 3000){
    printf("R$ %.2f\n", (salario-2000)*8/100);
  }else if(salario > 3000  && salario <= 4500){
    printf("R$ %.2f\n", ((salario-2000)*18/100)-100);
  }else if(salario > 4500){
    printf("R$ %.2f\n",  ((salario-2000)*28/100)-350);
  }
  return 0;
}
