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
void inicializarUnArray(int parametroArray[],int cantidad,int inicializacion)// no es necesario en este problema, pero sirve para poder saber si estoy usando un indice del array o si esta vacio / con valor ya fijado
{
    int indice;

    for(indice = 0; indice < CANTIDAD; indice ++) //1-Inicializo
    {
        parametroArray[indice] = inicializacion;
    }

}
void cargaSecuncialUnArray(int parametroArray[],int cantidad,char mensaje[])
{
    int indice ;

    for(indice = 0; indice < CANTIDAD; indice ++)
    {
        printf( mensaje);
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
void ordernarDesc(int parametroArray[],int cantidad) //22,11,33
{
    int indice ;
    int aux;
    int siguiente;

    for(indice = 0; indice < CANTIDAD-1; indice ++)
    {

      for(siguiente = indice + 1;siguiente < CANTIDAD; siguiente ++)
      {
         if(parametroArray[indice] > parametroArray[siguiente])
            {
                aux = parametroArray[indice];
                parametroArray[indice] = parametroArray[siguiente];
                parametroArray[siguiente] = aux;

            }

      }

    }
}
void ordernarAsc(int parametroArray[],int cantidad)
{
    int indice ;
    int aux;
    int siguiente;

    for(indice = 0; indice < CANTIDAD-1; indice ++)
    {

      for(siguiente = indice + 1;siguiente < CANTIDAD; siguiente ++)
      {
         if(parametroArray[indice] < parametroArray[siguiente])
            {
                aux = parametroArray[indice];
                parametroArray[indice] = parametroArray[siguiente];
                parametroArray[siguiente] = aux;

            }

      }

    }
}

