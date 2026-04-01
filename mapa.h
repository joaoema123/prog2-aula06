#ifndef mapa_h
#define mapa_h

#include <stdio.h>

int altura_mapa (FILE* fp);
int largura_mapa (FILE* fp);
int total_celulas_mapa (FILE* fp);
int carrega_mapa (FILE* fp, char** mat); 

#endif