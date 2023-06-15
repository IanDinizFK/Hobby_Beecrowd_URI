#include <stdio.h>
int main()
{
  double a=0.0;
  double matriz[12][12];
  char op;
    int C,x,y,z;
    scanf("%s", &op);
    for(x=0;x<=11;x++)
    {
        for(y=0; y<=11; y++)
            scanf("%lf", &matriz[x][y]);
    }
    int n = 11;
    for(z=1; z<=11;z++)
    {
        for(C=11; C>=n;C--)
            a+=matriz[z][C];
        n--;
    }
    if(op=='S'){
      printf("%.1lf\n",a); 
    }
    else if(op=='M'){
      printf("%.1lf\n",a/66.0);
    }
    return 0;
}
