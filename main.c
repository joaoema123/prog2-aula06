#include <stdio.h>
#include "mapa.h"
int main () {

    FILE* fp = fopen ("mapas.txt", "r");

    int altura = altura_mapa (fp);
    int largura = largura_mapa (fp);
    int total_celulas = total_celulas_mapa (fp);
    /*
    int largura = largura_mapa (fp);
    
    char mat [altura][largura];

    carrega_mapa (fp, mat); */

    printf ("%d\n", altura);
    printf ("%d\n", largura);
    //printf ("%d", total_celulas);

    return 0;
}