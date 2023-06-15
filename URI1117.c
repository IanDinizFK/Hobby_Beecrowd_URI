#include <stdio.h>
 
int main() {
    int count;
    float nota,media;
    while(count != 2){
        nota = 0;
        scanf("%f", &nota);
        if(nota >= 0 && nota <= 10){
            media += nota;
            count++;
        }else{
            printf("nota invalida\n");
        }
    }
    printf("media = %.2f\n", (media)/2);
    return 0;
}
