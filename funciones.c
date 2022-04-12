#include "funciones.h"
int Menu()
{
    int op;
    printf ("MENU PRINCIPAL \n");
    printf ("-------------- \n\n");
    printf ("1)Cargar Vector Funcion Stef \n");
    printf ("2)Cargar Vector Funcion Ema \n");
    printf ("3)Mostrar Vector \n");
    printf ("0)Salir\n");
    do
    {
        printf("\n Elija una opcion:");
        scanf ("%d", &op);
    }
    while (op<0 || op>3);
    return op;
}
int CargaVecStef(int *vec, int elem, int* *pvec,int tam)
{
    int *fin;
    fin=vec+tam;
    if(*pvec<fin)
    {
        **pvec=elem;
        (*pvec)++ ;// *pvec+=1     ==   *pvec=*pvec+1;// el 1 siempre significa "1x(el                                                                             tamaño que ocupa el tipo de dato)"
    }
    else return 0;
    return OK ;
}
int CargaVecEma(int* vec, int tam, int *ocupado, int elem)
{
    if (tam<(*ocupado+1))
        return 0;
    vec+=*ocupado;
    *vec=elem;
    (*ocupado)++;
    return 1;
}
void mostrar(int*p,int ocu)
{
    int i;
for (i=0;i<ocu;i++)
{
    printf("\n%d\n",*p);
    p++;
}

}

