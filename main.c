#include "funciones.h"
int main()
{
    int op,
        vec[TAM],
        *pvec=vec,//alpuntero siempre ponerle el inicio de la direccion que quiero que apunte
         dato,
         ocupado=0;
    op=Menu ();
    while(op)
    {
        switch (op)
        {
        case 1:
            printf("\n\n");
            printf("Ingrese dato:  ");
            scanf("%d", &dato);
            if (CargaVecStef(vec,dato,&pvec,TAM))
                printf("\n Carga Exitosa");
            else printf("\n No se puede guardar dato, Memoria Insuficiente");
            printf("\n\n");
            op=Menu();
            break;
        case 2:
            printf ("\n\n");
            printf("Ingrese dato:  ");
            scanf("%d", &dato);
            if (CargaVecEma(vec,TAM,&ocupado,dato))
                printf("\n Carga Exitosa");
            else printf("\n No se puede guardar dato, Memoria Insuficiente");
            printf("\n\n");
            op=Menu();
            break;
        case 3:
            mostrar(vec,ocupado);
            op=Menu();//si no le pongo el menú se transforma en un BUCLE INFINITO
            break;
        default:
            ;
        }
    }
    return 0;
}
