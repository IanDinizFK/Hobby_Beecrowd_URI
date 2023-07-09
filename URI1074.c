#include <stdio.h>
 
int main() {
  int i,x;
  scanf("%d", &x);
  int z[x];
  for(i = 0; i < x; i++){
    scanf("%d", &z[i]);
  }
  for(i = 0; i < x; i++){
    if(z[i] == 0){printf("NULL\n");}
    else if(abs(z[i])%2 == 0 && z[i] > 0){printf("EVEN POSITIVE\n");}
    else if(abs(z[i])%2 == 0 && z[i] < 0){printf("EVEN NEGATIVE\n");}
    else if(abs(z[i])%2 != 0 && z[i] > 0){printf("ODD POSITIVE\n");}
    else if(abs(z[i])%2 != 0 && z[i] < 0){printf("ODD NEGATIVE\n");}
  }
}
