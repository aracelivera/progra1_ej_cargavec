#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#define OK 1
#define TAM 3 //x ej
#include <stdio.h>
#include <stdlib.h>

int Menu();
int CargaVecStef(int *vec, int elem, int* *pvec,int tam);
int CargaVecEma(int* vec, int tam, int *ocupado, int elem);
void mostrar(int *p,int ocu);



#endif // FUNCIONES_H_INCLUDED
