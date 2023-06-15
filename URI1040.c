#include <stdio.h>
int main(){
  float n1=0.0,n2=0.0,n3=0.0,n4=0.0,ne=0.0,media = 0.0;
  scanf("%f %f %f %f", &n1,&n2,&n3,&n4);
  media = ((n1*2.0)+(n2*3.0)+(n3*4.0)+(n4));
  media = media/10.0;
  printf("Media: %.1f\n", media);
  if(media >= 7.0 && media <= 10.0){
    printf("Aluno aprovado.\n");
    return 0;
  }else if(media  < 5.0 && media >= 0.0){
    printf("Aluno reprovado.\n");
    return 0;
  }else if(media >= 5.0 && media <= 6.9){
    printf("Aluno em exame.\n");
    scanf("%f", &ne);
    printf("Nota do exame: %.1f\n", ne);
    media = (media + ne)/2.0;
    if(media >= 5.0 && media <= 10.0){
      printf("Aluno aprovado.\n");
      printf("Media final: %.1f\n", media);
      return 0;
    }else if(media <= 4.9 && media >= 0.0){printf("Aluno reprovado.\n");printf("Media final: %.1f\n", media);}
  }
}
