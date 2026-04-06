#include "mapa.h"

#include <stdio.h>
#include <string.h>

#define MAX 100

int altura, largura;

int altura_mapa(FILE* fp) {
  char vet[MAX];
  altura = 0;

  while (fgets(vet, MAX, fp)) {
    altura++;
  }

  return altura;
}

int largura_mapa(FILE* fp) {
  // esse vetor vai ler a primeira linha do mapa
  char vet[MAX];

  fgets(vet, MAX, fp);

  // usei a função strlen para calcular o tamanho do vetor que contem a borda do
  // mapa por isso que o tamanho desse vetor representa a largura

  largura = strlen(vet);

  return largura;
}

int total_celulas_mapa() { return altura * largura; }

int carrega_mapa(FILE* fp, char** mat) {
  if (fp == NULL) return 0;
  char linha[largura];
  int i = 0;
  while (fscanf(fp, "%[^\n]", mat[i]) != 0) {
    printf("%s\n", mat[i]);
    i++;
  }
  return 1;
}
