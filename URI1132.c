#include <stdio.h>

int main(){
  int i=0,j=0,x=0,y=0;
  scanf("%d", &x);
  scanf("%d", &y);
  if(x < y){
    for(i = x; i <= y; i++){
    if(i%13 != 0){
      j += i;
    }
  }
  }else{
    for(i = y; i <= x; i++){
      if(i%13 != 0){
        j += i;
      }
    }
  }
  
  printf("%d\n", j);
}
