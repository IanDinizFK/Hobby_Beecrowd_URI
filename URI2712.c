#include <stdio.h>
#include <string.h>

int main()
{

    int N;
    char placa[100];
    int tamanhoDaPlaca;
    int placaInvalida = 0;

    scanf("%d", &N);

    int i;
    for (i = 0; i < N; i++)
    {
        scanf("%s", placa);
        tamanhoDaPlaca = strlen(placa);
        placaInvalida = 0;

        if (tamanhoDaPlaca == 8)
        {
            int j = 0;
            for (j = 0; j < 2; j++)
            {
                if (!((placa[j] >= 'A') && (placa[j] <= 'Z')))
                {
                    placaInvalida = 1;
                }
            }

            if (placa[3] != '-')
            {
                placaInvalida = 1;
            }

            for (j = 4; j < tamanhoDaPlaca; j++)
            {
                if (!((placa[j] >= '0') && (placa[j] <= '9')))
                {
                    placaInvalida = 1;
                }
            }
        }

        else
        {
            placaInvalida = 1;
        }

        if (placaInvalida==0)
        {
            if((placa[7] == '1')||(placa[7] == '2')){
                printf("MONDAY\n");
            }
            if((placa[7] == '3')||(placa[7] == '4')){
                printf("TUESDAY\n");
            }
            if((placa[7] == '5')||(placa[7] == '6')){
                printf("WEDNESDAY\n");
            }
            if((placa[7] == '7')||(placa[7] == '8')){
                printf("THURSDAY\n");
            }
            if((placa[7] == '9')||(placa[7] == '0')){
                printf("FRIDAY\n");
            }
        }
        else
        {
            printf("FAILURE\n");
        }
    }

    return 0;
}
