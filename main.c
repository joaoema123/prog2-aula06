#include <stdio.h>
#include <stdlib.h>

#include "mapa.h"
int main() {
  int i, j, k;
  FILE* fp = fopen("mapa.txt", "r");

  int altura = altura_mapa(fp);
  int largura = largura_mapa(fp);
  int total = total_celulas_mapa();

  char** mat;
  mat = malloc(altura * sizeof(char*));
  for (i = 0; i < altura; i++) mat[i] = malloc(largura * sizeof(char));

  carrega_mapa(fp, mat);

  printf("%d\n", altura);
  printf("%d\n", largura);
  printf("%d\n", total);
  /*
  for (j = 0; j < altura; j++) {
    for (k = 0; k < largura; k++) printf("%c ", mat[j][k]);
    printf("\n");
  }*/

  return 0;
}