#include <stdio.h>
#include <stdlib.h>
#include "Arrays.h"
#define CANTIDAD 3

int main()
{

    int miArray[CANTIDAD];//0-Crear
    int maximo;
    int indiceMaximo;

    //mostrarUnArray(miArray[CANTIDAD]); da cualquier numero
    //mostrarUnArray(miArray[]); no anda, crashea
     // pasar por parametro
    //inicializarUnArray(miArray, CANTIDAD);
    cargaSecuncialUnArray (miArray, CANTIDAD);
    mostrarUnArray(miArray, CANTIDAD);

    maximo =dameElMaximo(miArray,CANTIDAD); //66,3
    printf("\nmaximo %d\n",maximo);


    indiceMaximo =dameElIndiceDelMaximo(miArray,CANTIDAD); //1,2
    printf("\nIndice maximo %d\n",indiceMaximo);


    return 0;
}
