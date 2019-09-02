#include <stdio.h>
#include <stdlib.h>

/*void cambiarPorValor(int unDato);
void cambiarPorReferencia(int* pDato);*/
int dameUnEntero(char*mensaje, int max, int cantidad, int *pNumero );

int main()
{

     int unNumero;
     int sePudo;
     int estaEntreRangos(int superior, int inferior, int* elNumero);

     sePudo = dameUnEntero("\nIngresa tu edad\n",100,3, &unNumero);

     if(sePudo == 0)
        {
        printf("\nno se pudo cargar\n");

        }
        else
            {
            printf("\nel numero es :%d\n", unNumero);
            }
       if (estaEntreRangos (100, 0, 22 ) == 0)
        {
        }
       else
        {
        }


     return 0;
}


int dameUnEntero(char* mensaje,int max, int cantidad, int *pNumero)
{
    int contador = 0;
    printf("%s", mensaje);
    scanf("%d", pNumero);
    while (*pNumero > max)
        {
            contador ++;
            printf("%s", mensaje);
            scanf("%d", pNumero);

            if (contador = cantidad)
                {
                    return 0;
                }
        }
    return 1;
}

int estaEntreRangos(int superior,int inferior, int elNumero)
{
    if(elNumero<superior && elNumero > inferior)
        {
            return 0;
        }
    return 1;
}
