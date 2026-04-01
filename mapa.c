#include <stdio.h>
#include "mapa.h"

#define MAX 100

int altura_mapa (FILE* fp) {
    char vet [MAX];
    int altura = 0;
    

    while (fgets (vet, MAX, fp)) {
        altura++;
    }

    return altura; 
}


int largura_mapa (FILE* fp) {

}