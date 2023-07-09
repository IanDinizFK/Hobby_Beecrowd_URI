#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int cases = 0, Malunos = 0, c, d, k, aux, qt, vAnt[1000], vDps[1000];
  char trocas;

  scanf("%d", &cases);

  for (c = 0; c < cases; c++) {
    qt = 0;
    scanf("%d", &Malunos);

    for (d = 0; d < Malunos; d++) {
      scanf("%d", &vAnt[d]);
      vDps[d] = vAnt[d];
    }

    do {
      trocas = 0;
      k = 0;
      while (k < Malunos - 1) {
        if (vDps[k] < vDps[k + 1]) {
          aux = vDps[k];
          vDps[k] = vDps[k + 1];
          vDps[k + 1] = aux;

          trocas = 1;
        }
        k++;
      }
    } while (trocas == 1);

    for (d = 0; d < Malunos; d++)
      if (vAnt[d] == vDps[d])
        ++qt;
    printf("%d\n", qt);
  }

  return 0;
}
