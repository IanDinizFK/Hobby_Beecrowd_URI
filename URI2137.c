#include <stdio.h>
#include <string.h>

int main(){

  int qt, i;
  int s = 0,n = 0;
typedef struct{

  int codigo;

} livraria;

  while(scanf("%d", &qt) != EOF){

  livraria lista[qt];
  for(i = 0; i < qt; i++){
    scanf("%d", &lista[i].codigo);
  }
  int aux;
  for(i = 0; i < qt; i++){
    for(int j = 0; j < qt; j++){
      int numaux;
      if(lista[i].codigo < lista[j].codigo){
        numaux = lista[i].codigo;
        lista[i].codigo = lista[j].codigo;
        lista[j].codigo = numaux;
      }
    }
  }

  for(i = 0; i < qt; i++){
    printf("%04d\n", lista[i].codigo);
  }
  }

}
