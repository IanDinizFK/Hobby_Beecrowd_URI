#include <stdio.h>
 
int main() {
 
    int h,v;
    float distancia;
    scanf("%d", &h);
    scanf("%d", &v);
    distancia = v*h;
    printf("%.3f\n", distancia/12);
 
    return 0;
}
