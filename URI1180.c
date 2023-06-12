#include <stdio.h>
#include <stdlib.h>

int main(){
  int i,n,menor,pos,j;
  scanf("%d ", &n);
  int vet[n];
  for(j = 0; j != n; j++){
    scanf("%d", &vet[j]);
  }
  menor = vet[0];
  pos = 0;
  for(i = 1; i < n; i++){
    if(menor > vet[i]){
      menor = vet[i];
      pos = i;
    }
  }
  printf("Menor valor: %d\n", menor);
  printf("Posicao: %d\n", pos);
}
