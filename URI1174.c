#include <stdio.h>

int main()
{
    float A[100];
    int i;
    while(i != 100){
        scanf("%f", &A[i]);
        if(A[i] <= 10){
            printf("A[%d] = %.1f\n", i,A[i]);
        }
        ++i;
    }
    return 0;
}
