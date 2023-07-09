#include <stdio.h>
#include <string.h>

int main(){

  int qt, i;
  int s = 0,n = 0;
typedef struct{

  char nome[21];
  char comp;

} nomes;

  scanf("%d", &qt);
  nomes lista[qt];
  for(i = 0; i < qt; i++){
    scanf(" %c %s", &lista[i].comp, lista[i].nome);
    if(lista[i].comp == '+'){s++;}
    else{n++;}
  }
  int aux;
  for(i = 0; i < qt; i++){
    for(int j = 0; j < qt; j++){
      aux = strcmp(lista[i].nome, lista[j].nome);
      char nomeaux[21];
      if(aux < 0){
        strcpy(nomeaux, lista[i].nome);
        strcpy(lista[i].nome, lista[j].nome);
        strcpy(lista[j].nome, nomeaux);
      }
    }
  }

  for(i = 0; i < qt; i++){
    printf("%s\n", lista[i].nome);
  }
  
  
  printf("Se comportaram: %d | Nao se comportaram: %d\n", s, n);
}
