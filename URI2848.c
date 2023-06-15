#include <stdio.h>
#include <stdlib.h>
int main(){
  long long int kaezimo,aux;
  int L,R,K,G,D;
  int N,Q;
  int i,j,z,w,a,v,count;

  scanf("%d %d", &N, &Q);
  long long int vetor[N];
  for(j = 0; j < N; j++){
      scanf("%lld", &vetor[j]);
  }

  for(i = 0; i < Q; i++){
    count=0;
    scanf("%d %d %d %d %d", &L,&R, &K,&G,&D);
    long long int o[R-L+1];
    for(z = 0; z < (R-L)+1; z++){
      o[z] = vetor[(L+z)-1];
      //printf("%lld ", o[z]);
    }
    //printf("\n");
    if(L==R){
      kaezimo = o[0];
      count = 1;
    }else{
      for(w = 0; w < (R-L)+1; w++){
      j = w;
      while((j != 0) && (o[j] > o[j - 1])) {
          aux = o[j];
          o[j] = o[j - 1];
          o[j - 1] = aux;
          j--;
      }
    }
      kaezimo = o[(R-L-K)+1];
      //printf("KAEZIMO = %lld\n", kaezimo);
      for(z = 0; z < (R-L)+1; z++){
        if(kaezimo == o[z]){count++;}
      }
    }
    /*for(z = 0; z < (R-L)+1; z++){
      printf("%lld ", o[z]);
    }*/
    //printf("\n");
    if(G == D || abs(count-G) == abs(count-D)){
        printf("%lld %d E\n", kaezimo,count);
    }else if(abs(count-G) < abs(count-D)){
        printf("%lld %d G\n", kaezimo,count);
    }else{printf("%lld %d D\n", kaezimo,count);}

  }
    return 0;
}
