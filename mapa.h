#ifndef mapa_h
#define mapa_h

#define MAX 100

#include <stdio.h>

int altura_mapa(FILE* fp);
int largura_mapa(FILE* fp);
int total_celulas_mapa();
int carrega_mapa(FILE* fp, char** mat);

#endif