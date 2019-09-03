#include <stdio.h>
#include <stdlib.h>
#include "Vectores.h"
#define T 10
int main()
{
    int vectorDeNumeros[T]= {7,-5,5,-6,-1,-4,10,5,4,-6};
    int i;
    int contadorDePositivos = 0;
    int sumaDePositivos = 0;
    float promedioPositivos;
    int maximo;
    int minimo;
    int flag = 0;
    int opcion;

    do
    {
        printf("\n1.cargar numeros\n2.mostrar todo\n3.mostrar negativos\n4.mostrar promedio de positivos\n5.mostrar maximo\n6.mostrar minimo\n7.salir\n");
        scanf("%d", &opcion);

        switch(opcion)

        {
        case 1:
            cargarVector(vectorDeNumeros, T);
            break;

        case 2:
            printf("\tMUESTRO EL VECTOR\n");
            for(i=0; i<10; i++)
            {
                printf("%d\n", vectorDeNumeros[i]);
            }
        case 3 :
            printf("\n\n\tMUESTRO SOLO LOS NEGATIVOS\n");
            for(i=0; i<10; i++)
            {
                if(vectorDeNumeros[i]<0)
                {
                    printf("%d\n", vectorDeNumeros[i]);
                }
            }

        case 4:
            for(i=0; i<10; i++)
            {
                if(vectorDeNumeros[i]>=0)
                {
                    sumaDePositivos += vectorDeNumeros[i];
                    contadorDePositivos++;
                }
            }

            promedioPositivos = (float)sumaDePositivos/contadorDePositivos;

            printf("Suma: %d -- Cantidad %d\n\n", sumaDePositivos, contadorDePositivos);


            printf("\n\n\PROMEDIO DE POSITIVOS: %f\n\n", promedioPositivos);

        case 5:

            mostrarMaximo(vectorDeNumeros, T);
            break;

        case 6:

            flag = 0;

            for(i = 0; i <10; i++)
            {


                if (flag ==0 || vectorDeNumeros[i] < minimo)
                {
                    minimo = vectorDeNumeros[i];



                }
                flag = 1;
                printf("\nMINIMO: %d\n",minimo);

                for(i = 0; i <10; i++)
                {
                    if(vectorDeNumeros[i] == minimo)
                    {
                        printf("%d-",i);
                    }
                }

            }

        }
    }
    while(opcion != 7);

    return 0;
}

