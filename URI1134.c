#include <stdio.h>

int main(){
  int x=0,a=0,g=0,d=0;
  while(x != 4){
    scanf("%d", &x);
    if(x == 4){break;}
    while(x < 1 || x > 4){
      scanf("%d", &x);
    }
    switch (x){
      case 1:
        a++;
        break;
      case 2:
        g++;
        break;
      case 3:
        d++;
        break;
      case 4:
        break;
    }
  }
  printf("MUITO OBRIGADO\n");
  printf("Alcool: %d\n", a);
  printf("Gasolina: %d\n", g);
  printf("Diesel: %d\n", d);
  
  
}



 
