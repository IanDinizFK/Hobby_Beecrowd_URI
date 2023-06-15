#include <stdio.h>

int main(){
  double a=0, matriz[12][12];
  char T;
  int j,x,y,i;
  scanf("%s", &T);
  for(x=0;x<12;x++){
    for(y=0; y<12; y++)
      scanf("%lf", &matriz[x][y]);
    }
    int p=1;
  for(i=0; i<12;i++){
    for(j=p; j<12;j++)
      a+=matriz[i][j];
      p++;
    }
    if(T=='S')
      printf("%.1lf\n",a);
    else if(T=='M'){
      a=a/66.0;
      printf("%.1lf\n",a);
    }
    return 0;
}
