#include <stdio.h>
int main(){
  float a, media = 0.0;
  int i, cont=0;
  for(i = 0; i < 6; i++){
    scanf("%f", &a);
    if(a > 0){cont++; media += a;}
  }
  printf("%d valores positivos\n", cont);
  printf("%.1f\n", media/cont);
  return 0;
}
