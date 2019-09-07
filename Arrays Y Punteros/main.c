#include <stdio.h>
#include <stdlib.h>
#define CANTIDAD 3
void mostrarUnArray(int parametroArray[],int cantidad);
void inicializarUnArray(int parametroArray[],int cantidad);
void cargaSecuncialUnArray(int parametroArray[],int cantidad);
int dameElMaximo(int parametroArray[],int cantidad);
int dameElIndiceDelMaximo(int parametroArray[],int cantidad);

int main()
{

    int miArray[CANTIDAD];//0-Crear
    int maximo;
    int indiceMaximo;

    //mostrarUnArray(miArray[CANTIDAD]); da cualquier numero
    //mostrarUnArray(miArray[]); no anda, crashea
     // pasar por parametro
    inicializarUnArray(miArray, CANTIDAD);
    cargaSecuncialUnArray (miArray, CANTIDAD);
    mostrarUnArray(miArray, CANTIDAD);

    maximo =dameElMaximo(miArray,CANTIDAD); //66,3
    printf("\nmaximo %d\n",maximo);


    indiceMaximo =dameElIndiceDelMaximo(miArray,CANTIDAD); //1,2
    printf("\nIndice maximo %d\n",indiceMaximo);


    return 0;
}
void mostrarUnArray (int parametroArray[],int cantidad)
{
    int indice ;

    for(indice = 0; indice < cantidad; indice ++) //2-Traer
    {
        printf("\n numero : %d", parametroArray[indice]);
    }

}
void inicializarUnArray(int parametroArray[],int cantidad)
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

    for(indice = 0; indice < CANTIDAD; indice ++)
    {
        if(parametroArray[indice]> maximo|| indice == 0)
            {
                maximo =parametroArray[indice];
                indiceMaximo =indice;
            }
    }
    return indiceMaximo;

}
