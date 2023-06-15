#include <stdio.h>
int main(){
  float x,y;
  scanf("%f %f", &x,&y);
  if(x == 0 && y == 0){
    printf("Origem\n");
    return 0;
  }else if(x == 0 && y != 0){
    printf("Eixo Y\n");
    return 0;
  }else if(x != 0 && y == 0){
    printf("Eixo X\n");
    return 0;
  }else if(x > 0 && y > 0){
    printf("Q1\n");
    return 0;
  }else if(x < 0 && y > 0){
    printf("Q2\n");
    return 0;
  }else if(x > 0 && y < 0){
    printf("Q4\n");
    return 0;
  }else if(x < 0 && y < 0){
    printf("Q3\n");
    return 0;
  }
}
