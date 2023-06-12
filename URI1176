#include <stdio.h>

int main(){
    int i,cont,a_fib,j=0, z,x,k;
    long long fib[60] = {0,1};
    scanf("%d", &cont);
    for (k = 0; k < cont; k++){
      z=0,x=1;
      scanf("%d", &a_fib);
      if(a_fib == 0){printf("Fib(0) = 0\n");}
      else if(a_fib == 1){printf("Fib(1) = 1\n");}
      else{
        for(i = 2; i < a_fib+1; i++){
          fib[i] = fib[z] + fib[x];
          z++;x++;
          if(i == a_fib){
            printf("Fib(%d) = %lld\n", a_fib, fib[i]);
          }
        }
      }
    }
}
