#include <stdio.h>
#include "mapa.h"
int main () {

    FILE* fp = fopen ("mapa.txt", "r");

    int altura = altura_mapa (fp);
    /*
    int largura = largura_mapa (fp);
    
    char mat [altura][largura];

    carrega_mapa (fp, mat); */

    printf ("%d\n", altura);

    return 0;
}