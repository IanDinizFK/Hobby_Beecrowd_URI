#include <stdio.h>

int main(void){
   float m[12][12], soma = 0, med;
   int linha, i, j;
   char op;

   scanf("%d %c ", &linha, &op);
   for (i = 0; i < 12; i++){
      for (j = 0; j < 12; j++){
         scanf("%f", &m[i][j]);
      }
   }

   for (i = 0; i < 12; i++){
      soma += m[linha][i];
   }
   med = soma/12.0;

   switch (op){
   case 'S':
      printf("%.1f\n", soma);
      break;
   default:
      printf("%.1f\n", med);
      break;
   }
   return 0;
}
