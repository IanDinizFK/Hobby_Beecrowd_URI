#include <stdio.h>
int main(){
  int et,i,x,j;
  scanf("%d", &et);
  for(x = 0; x < et; x++){
    int mat1[3][3],mat2[3][3],mat3[3][3],mat4[3][3];
    int mat5[3][3],mat6[3][3],mat7[3][3];
    int mat8[3][3],mat9[3][3];
    int matriz[9][9];
    int c1,c2,c3,c4,c5,c6,c7,c8,c9;
    int testes = 0;
    for(i = 0; i < 9; i++){
      for(j = 0; j<9; j++){
        if(i >= 0 && i <= 2 && j >= 0 && j <= 2){
          scanf("%d", &mat1[i][j]);
          matriz[i][j] = mat1[i][j];
        }else if(i >= 0 && i <= 2 && j >= 3 && j <= 5){
          scanf("%d", &mat2[i][j-3]);
          matriz[i][j] = mat2[i][j-3];
        }else if(i >= 0 && i <= 2 && j >= 6 && j <= 8){
          scanf("%d", &mat3[i][j-6]);
          matriz[i][j] = mat3[i][j-6];
        //SEGUNDA COLUNA DE MATRIZES
        }else if(i >= 3 && i <= 5 && j >= 0 && j <= 2){
          scanf("%d", &mat4[i-3][j]);
          matriz[i][j] = mat4[i-3][j];
        }else if(i >= 3 && i <= 5 && j >= 3 && j <= 5){
          scanf("%d", &mat5[i-3][j-3]);
          matriz[i][j] = mat5[i-3][j-3];
        }else if(i >= 3 && i <= 5 && j >= 6 && j <= 8){
          scanf("%d", &mat6[i-3][j-6]);
          matriz[i][j] = mat6[i-3][j-6];
        }
        //TERCEIRA COLUNA DE MATRIZES
        else if(i >= 6 && i <= 8 && j >= 0 && j <= 2){
          scanf("%d", &mat7[i-6][j]);
          matriz[i][j] = mat7[i-6][j];
        }else if(i >= 6 && i <= 8 && j >= 3 && j <= 5){
          scanf("%d", &mat8[i-6][j-3]);
          matriz[i][j] = mat8[i-6][j-3];
        }else if(i >= 6 && i <= 8 && j >= 6 && j <= 8){
          scanf("%d", &mat9[i-6][j-6]);
          matriz[i][j] = mat9[i-6][j-6];
        }
      }
    }
    for(i = 0; i < 3; i++){
      for(j=0; j < 3; j++){
        if(mat1[i][j] == 1){c1++;}
        else if(mat1[i][j] == 2){c2++;}
        else if(mat1[i][j] == 3){c3++;}
        else if(mat1[i][j] == 4){c4++;}
        else if(mat1[i][j] == 5){c5++;}
        else if(mat1[i][j] == 6){c6++;}
        else if(mat1[i][j] == 7){c7++;}
        else if(mat1[i][j] == 8){c8++;}
        else if(mat1[i][j] == 9){c9++;}
      }
    }
    if(c1==1 && c2==1 && c3==1 && c4==1 && c5==1 && c6==1 && c7==1 && c8==1 && c9==1){testes++;}
    c1=0;c2=0;c3=0;c4=0;c5=0;c6=0;c7=0;c8=0;c9=0;
    for(i = 0; i < 3; i++){
      for(j=0; j < 3; j++){
        if(mat2[i][j] == 1){c1++;}
        else if(mat2[i][j] == 2){c2++;}
        else if(mat2[i][j] == 3){c3++;}
        else if(mat2[i][j] == 4){c4++;}
        else if(mat2[i][j] == 5){c5++;}
        else if(mat2[i][j] == 6){c6++;}
        else if(mat2[i][j] == 7){c7++;}
        else if(mat2[i][j] == 8){c8++;}
        else if(mat2[i][j] == 9){c9++;}
      }
    }
    if(c1==1 && c2==1 && c3==1 && c4==1 && c5==1 && c6==1 && c7==1 && c8==1 && c9==1){testes++;}
    c1=0;c2=0;c3=0;c4=0;c5=0;c6=0;c7=0;c8=0;c9=0;
    for(i = 0; i < 3; i++){
      for(j=0; j < 3; j++){
        if(mat3[i][j] == 1){c1++;}
        else if(mat3[i][j] == 2){c2++;}
        else if(mat3[i][j] == 3){c3++;}
        else if(mat3[i][j] == 4){c4++;}
        else if(mat3[i][j] == 5){c5++;}
        else if(mat3[i][j] == 6){c6++;}
        else if(mat3[i][j] == 7){c7++;}
        else if(mat3[i][j] == 8){c8++;}
        else if(mat3[i][j] == 9){c9++;}
      }
    }
    if(c1==1 && c2==1 && c3==1 && c4==1 && c5==1 && c6==1 && c7==1 && c8==1 && c9==1){testes++;}
    c1=0;c2=0;c3=0;c4=0;c5=0;c6=0;c7=0;c8=0;c9=0;
    for(i = 0; i < 3; i++){
      for(j=0; j < 3; j++){
        if(mat4[i][j] == 1){c1++;}
        else if(mat4[i][j] == 2){c2++;}
        else if(mat4[i][j] == 3){c3++;}
        else if(mat4[i][j] == 4){c4++;}
        else if(mat4[i][j] == 5){c5++;}
        else if(mat4[i][j] == 6){c6++;}
        else if(mat4[i][j] == 7){c7++;}
        else if(mat4[i][j] == 8){c8++;}
        else if(mat4[i][j] == 9){c9++;}
      }
    }
    if(c1==1 && c2==1 && c3==1 && c4==1 && c5==1 && c6==1 && c7==1 && c8==1 && c9==1){testes++;}
    c1=0;c2=0;c3=0;c4=0;c5=0;c6=0;c7=0;c8=0;c9=0;
    for(i = 0; i < 3; i++){
      for(j=0; j < 3; j++){
        if(mat5[i][j] == 1){c1++;}
        else if(mat5[i][j] == 2){c2++;}
        else if(mat5[i][j] == 3){c3++;}
        else if(mat5[i][j] == 4){c4++;}
        else if(mat5[i][j] == 5){c5++;}
        else if(mat5[i][j] == 6){c6++;}
        else if(mat5[i][j] == 7){c7++;}
        else if(mat5[i][j] == 8){c8++;}
        else if(mat5[i][j] == 9){c9++;}
      }
    }
    if(c1==1 && c2==1 && c3==1 && c4==1 && c5==1 && c6==1 && c7==1 && c8==1 && c9==1){testes++;}
    c1=0;c2=0;c3=0;c4=0;c5=0;c6=0;c7=0;c8=0;c9=0;
    for(i = 0; i < 3; i++){
      for(j=0; j < 3; j++){
        if(mat6[i][j] == 1){c1++;}
        else if(mat6[i][j] == 2){c2++;}
        else if(mat6[i][j] == 3){c3++;}
        else if(mat6[i][j] == 4){c4++;}
        else if(mat6[i][j] == 5){c5++;}
        else if(mat6[i][j] == 6){c6++;}
        else if(mat6[i][j] == 7){c7++;}
        else if(mat6[i][j] == 8){c8++;}
        else if(mat6[i][j] == 9){c9++;}
      }
    }
    if(c1==1 && c2==1 && c3==1 && c4==1 && c5==1 && c6==1 && c7==1 && c8==1 && c9==1){testes++;}
    c1=0;c2=0;c3=0;c4=0;c5=0;c6=0;c7=0;c8=0;c9=0;
    for(i = 0; i < 3; i++){
      for(j=0; j < 3; j++){
        if(mat7[i][j] == 1){c1++;}
        else if(mat7[i][j] == 2){c2++;}
        else if(mat7[i][j] == 3){c3++;}
        else if(mat7[i][j] == 4){c4++;}
        else if(mat7[i][j] == 5){c5++;}
        else if(mat7[i][j] == 6){c6++;}
        else if(mat7[i][j] == 7){c7++;}
        else if(mat7[i][j] == 8){c8++;}
        else if(mat7[i][j] == 9){c9++;}
      }
    }
    if(c1==1 && c2==1 && c3==1 && c4==1 && c5==1 && c6==1 && c7==1 && c8==1 && c9==1){testes++;}
    c1=0;c2=0;c3=0;c4=0;c5=0;c6=0;c7=0;c8=0;c9=0;
    for(i = 0; i < 3; i++){
      for(j=0; j < 3; j++){
        if(mat8[i][j] == 1){c1++;}
        else if(mat8[i][j] == 2){c2++;}
        else if(mat8[i][j] == 3){c3++;}
        else if(mat8[i][j] == 4){c4++;}
        else if(mat8[i][j] == 5){c5++;}
        else if(mat8[i][j] == 6){c6++;}
        else if(mat8[i][j] == 7){c7++;}
        else if(mat8[i][j] == 8){c8++;}
        else if(mat8[i][j] == 9){c9++;}
      }
    }
    if(c1==1 && c2==1 && c3==1 && c4==1 && c5==1 && c6==1 && c7==1 && c8==1 && c9==1){testes++;}
    c1=0;c2=0;c3=0;c4=0;c5=0;c6=0;c7=0;c8=0;c9=0;
    int teste2 = 0;
    for(i = 0; i < 3; i++){
      for(j=0; j < 3; j++){
        if(mat9[i][j] == 1){c1++;}
        else if(mat9[i][j] == 2){c2++;}
        else if(mat9[i][j] == 3){c3++;}
        else if(mat9[i][j] == 4){c4++;}
        else if(mat9[i][j] == 5){c5++;}
        else if(mat9[i][j] == 6){c6++;}
        else if(mat9[i][j] == 7){c7++;}
        else if(mat9[i][j] == 8){c8++;}
        else if(mat9[i][j] == 9){c9++;}
      }
    }
    if(c1==1 && c2==1 && c3==1 && c4==1 && c5==1 && c6==1 && c7==1 && c8==1 && c9==1){testes++;}
    c1=0;c2=0;c3=0;c4=0;c5=0;c6=0;c7=0;c8=0;c9=0;

    for(i = 0; i < 9; i++){
      for(j = 0; j < 9; j++){
        if(matriz[i][j] == 1){c1++;}
        else if(matriz[i][j] == 2){c2++;}
        else if(matriz[i][j] == 3){c3++;}
        else if(matriz[i][j] == 4){c4++;}
        else if(matriz[i][j] == 5){c5++;}
        else if(matriz[i][j] == 6){c6++;}
        else if(matriz[i][j] == 7){c7++;}
        else if(matriz[i][j] == 8){c8++;}
        else if(matriz[i][j] == 9){c9++;}
      }
      if(c1==1 && c2==1 && c3==1 && c4==1 && c5==1 && c6==1 && c7==1 && c8==1 && c9==1){teste2++;}
      c1=0;c2=0;c3=0;c4=0;c5=0;c6=0;c7=0;c8=0;c9=0;
      
    }
    for(i = 0; i < 9; i++){
      for(j = 0; j < 9; j++){
        if(matriz[j][i] == 1){c1++;}
        else if(matriz[j][i] == 2){c2++;}
        else if(matriz[j][i] == 3){c3++;}
        else if(matriz[j][i] == 4){c4++;}
        else if(matriz[j][i] == 5){c5++;}
        else if(matriz[j][i] == 6){c6++;}
        else if(matriz[j][i] == 7){c7++;}
        else if(matriz[j][i] == 8){c8++;}
        else if(matriz[j][i] == 9){c9++;}
      }
      if(c1==1 && c2==1 && c3==1 && c4==1 && c5==1 && c6==1 && c7==1 && c8==1 && c9==1){teste2++;}
      
      c1=0;c2=0;c3=0;c4=0;c5=0;c6=0;c7=0;c8=0;c9=0;
      
    }
    if(testes == 9 && teste2 == 18){
      printf("Instancia %d\n", x+1);
      printf("SIM\n");
    }else{
      printf("Instancia %d\n", x+1);
      printf("NAO\n");
    }
    printf("\n");
    testes = 0;
    teste2 = 0;
    c1=0;c2=0;c3=0;c4=0;c5=0;c6=0;c7=0;c8=0;c9=0;
  }
  return 0;
}
