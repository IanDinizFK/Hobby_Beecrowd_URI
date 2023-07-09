#include <stdio.h>
int main(){
  float x,y;
  x = 1;
  y = 1;
  
  while(x != 0 || y != 0){
    scanf("%f %f", &x,&y);
    if(x == 0 && y == 0){
        return 0;
    }else if(x == 0 && y != 0){
        return 0;
    }else if(x != 0 && y == 0){
        return 0;
    }else if(x > 0 && y > 0){
        printf("primeiro\n");
      }else if(x < 0 && y > 0){
        printf("segundo\n");
      }else if(x > 0 && y < 0){
        printf("quarto\n");
      }else if(x < 0 && y < 0){
        printf("terceiro\n");
      }
  }
  
}
