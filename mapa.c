#include <stdio.h>
#include <string.h>
#include "mapa.h"

#define MAX 100

int altura_mapa (FILE* fp) {
    // vetor que vai receber cada linha da matriz que representa o mapa
    char vet [MAX];
    int altura = 0; 
    
    //esse loop percorre linha por linha, e a cada linha aumenta a variável altura, portanto representa a altura do mapa
    while (fgets (vet, MAX, fp)) {
        altura++;
    }

    return altura; 
}


int largura_mapa (FILE* fp) {
    // esse vetor vai ler a primeira linha do mapa
    char vet[MAX];

    fgets (vet, MAX, fp);

    //usei a função strlen para calcular o tamanho do vetor que contem a borda do mapa
    //por isso que o tamanho desse vetor representa a largura

    int largura = strlen (vet);

    return largura;
}

int total_celulas_mapa (FILE* fp) {
    int altura = altura_mapa (fp);
    int largura = largura_mapa (fp);
    //o número de células é altura * largura
    int total_celulas = altura*largura;
    printf ("%d", total_celulas);
    return total_celulas;
}