#include <stdio.h>

int main()
{
int N;
int medidas[100]; 
int vales_picos[100]; 
int s = 1;

scanf("%d", &N);

//Atribuição das medidads
int i;
for (i = 0; i < N; i++)
{
    scanf("%d", &medidas[i]);    
}

//verificação da sequência de picos e vales
int j;
for (j = 1; j < N; j++)
{
    if (medidas[j] > medidas[j-1]){
        //pico 
        vales_picos[j-1] = 1;
    } else if (medidas[j] < medidas[j-1]){
        //vale
        vales_picos[j-1] = 0;
    } else {
        s = 0;
        //erro.
        printf("%d\n", s);
        return 0;
    }
}

int k;
for (k = 0; k < N-2; k++){
    int s = 1;
    if (vales_picos[k] == vales_picos[k+1]){
        s = 0;
        printf("%d\n", s);
        return 0;
    } 
}

printf("%d\n", s);

return 0;
}
