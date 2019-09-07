#define CANTIDAD 3
#include <stdio.h>
#include <stdlib.h>

void mostrarUnArray (int parametroArray[],int cantidad)
{
    int indice ;

    for(indice = 0; indice < cantidad; indice ++) //2-Traer
    {
        printf("\n numero : %d", parametroArray[indice]);
    }

}
void inicializarUnArray(int parametroArray[],int cantidad)// no es necesario en este problema, pero sirve para poder saber si estoy usando un indice del array o si esta vacio / con valor ya fijado
{
    int indice;

    for(indice = 0; indice < CANTIDAD; indice ++) //1-Inicializo
    {
        parametroArray[indice] = 0;
    }

}
void cargaSecuncialUnArray(int parametroArray[],int cantidad)
{
    int indice ;

    for(indice = 0; indice < CANTIDAD; indice ++)
    {
        printf("\n ingrese numero:");
        scanf("%d",&parametroArray[indice]);

    }

}
int dameElMaximo(int parametroArray[],int cantidad)

{
    int indice;
    int maximo;

     for(indice = 0; indice < CANTIDAD; indice ++)
    {
        if(parametroArray[indice]> maximo|| indice == 0) // funciona como flag el indice
            {
                maximo =parametroArray[indice];

            }


    }

    return maximo;
}
int dameElIndiceDelMaximo(int parametroArray[],int cantidad)
{
    int indice;
    int maximo;
    int indiceMaximo;

    maximo = dameElMaximo(parametroArray,cantidad);

    for(indice = 0; indice < CANTIDAD; indice ++)
    {
        if(parametroArray[indice]==maximo)
            {

                indiceMaximo =indice;
            }
    }
    return indiceMaximo;

}

