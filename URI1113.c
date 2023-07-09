#include <stdio.h>
 
int main() {
 
   int x,y,i;
   for(i = 0; i < 999999999; i++){
        scanf("%d %d", &x,&y);
        if(x > y){printf("Decrescente\n");}
        else if(x < y){printf("Crescente\n");}
        else if(x == y){break;}
   }
 
    return 0;
}
