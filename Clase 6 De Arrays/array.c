#include <stdio.h>
#include <stdlib.h>


void inicializacion(int arraySillas[],int MAX)
{
    int i;
    for(i=0;i<MAX;i++)
        {
          arraySillas[i]=0;
        }
}
void pideLegajo(int arrayLegajo[],int MAX)
{
    int i;
    for(i=0;i< MAX;i++)
        {
            printf("\nIngrese el legajo :");
            scanf("%d",&arrayLegajo[i]);
        }
}
void hardcodeoLegajo(int arrayLegajo[],int MAX)
{
    int i;
    int hardL[5] ={100,110,200,190,180};

    for(i=0;i<MAX;i++)
        {
            arrayLegajo[i]=hardL[i];
        }
}
void mostrarLegajo(int arrayLegajo[],int MAX)
{
    int i;
    for(i=0;i<MAX;i++)
        {
            printf("\nEl legajo es : %d",arrayLegajo[i]);
        }
}
void pideEdad(int arraySillas[],int MAX)
{
     int i;
    for(i=0;i< MAX;i++)
        {
            printf("\nIngrese su edad :");
            scanf("%d",&arraySillas[i]);
        }
}
void hardcodeoEdad(int arrayEdad[],int MAX)
{
    int i;
    int hardEdad[5]={10,20,50,50,30};
    for (i=0;i<MAX;i++)
        {
            arrayEdad[i]= hardEdad[i];
        }

}
void mostrarEdad (int arraySillas[],int MAX)
{
    int i;
    for(i=0;i< MAX;i++)
        {
            printf("\nLa edad es : %d",arraySillas[i]);
        }
}
int edadMaxima(int arrayEdad[],int MAX)
{
    int i;
    int maximo;

    for (i=0;i<MAX;i++)
        {
            if(i==0||arrayEdad[i]>maximo)
                {
                    maximo = arrayEdad[i];
                }
        }
        return maximo;
}

int legajoMaximo (int arrayLegajo[],int MAX)
{
    int i;
    int maximo;
    for(i=0;i< MAX;i++)
        {
            if(i==0||arrayLegajo[i]>maximo)
                {
                    maximo = arrayLegajo[i];
                }

        }
    return maximo;

}
int legajoMinimo (int arrayLegajo[],int MAX)
{
    int i;
    int minimo;
    for(i=0;i< MAX;i++)
        {
            if(i==0||arrayLegajo[i]<minimo)
                {
                    minimo= arrayLegajo[i];
                }

        }
        return minimo;

}
int laSillaLibre (int arraySillas[],int MAX,int inicio)
{
    int i;
    int retorno = 0;
    for(i=0;i<MAX;i++)
        {
            if(arraySillas[i]==inicio)
                {
                    retorno = 1;
                }
        }

      return retorno;

}
/*/int sillasOcupadas(int arraySillas[],int MAX)//
{
    int i;
    int cantidadSillasOcupadas;

    for(i=0;i<MAX;i++)
        {
          if()
            {
                cantidadSillasOcupadas ++;
            }
        }
    return cantidadSillasOcupadas;
}*/
/*int sillasLibres(int arraySillas[],int MAX)//
{
    int i;
    int cantidadSillasLibres;

    for(i=0;i<MAX;i++)
        {
          if( )
            {
                cantidadSillasLibres ++;
            }
        }
    return cantidadSillasLibres;
}*/
void mostrarTodo(int arrayLegajo[],int arrayEdad[],int MAX)
{
    int i;
    for (i=0;i<MAX;i++)
        {
            printf("\nSilla : %d     Legajo : %d     Edad : %d",i+1,arrayLegajo[i],arrayEdad[i]);
        }
}
void clienteMasViejo(int arraySillas[],int arrayLegajo[],int arrayEdad[], int MAX) //
{

    int viejo;
    int legajoV;
    int sillaV;

    viejo = legajoMaximo(arrayEdad,MAX);
    legajoV = legajoMaximo(arrayLegajo,MAX);
    sillaV = legajoMaximo(arraySillas,MAX);




    printf("\nEl cliente mas viejo tiene : %d su legajo es : %d y su puesto en la silla es : %d",viejo,legajoV,sillaV);
}

