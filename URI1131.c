#include <stdio.h>

int main(){
  int g,i,op = 1, gw=0,iw = 0, ge = 0, cont = 1;
  scanf("%d %d", &i,&g);
  while(op != 2){
    if(g > i){gw++;}
    else if(g == i){ge++;}
    else if(g < i){iw++;}
    printf("Novo grenal (1-sim 2-nao)\n");
    scanf("%d", &op);
    if(op == 2){break;}
    scanf("%d %d", &i,&g);
    cont++;
  }
  printf("%d grenais\n", cont);
  printf("Inter:%d\n", iw);
  printf("Gremio:%d\n", gw);
  printf("Empates:%d\n", ge);
  if(gw > iw){printf("Gremio venceu mais\n");}
  else if(gw < iw){printf("Inter venceu mais\n");}
  else if(gw == iw){printf("Nao houve vencedor");}
  return 0;
}



 
