#include <stdio.h>
#include <stdlib.h>
#define T 3
//crear menu de usuario : dejar sentado un alumno, alumnos mas viejo(mostrar su nombre), alumnos sentados,nombre de cada alumno, funcion que ordene alumnos sentados por nombres, mostrar todo
int main()
{
    int legajo[T];
    char nombre[T][15];
    int i;
    int j;
    int aux;
    char auxString[15];
    for(i=0;i<T;i++)
        {
            printf("Ingrese legajo :\n");
            scanf("%d",&legajo[i]);

            printf("Ingrese nombre :\n");
            fflush(stdin);
            gets(nombre[i]);
        }
    for(i=0;i<T;i++)
        {
            printf("%d\t%s\n",legajo[i],nombre[i]);
        }
    for(i=0;i<T-1;i++)
        {
            for(j=i+i;j<T;j++)
                {
                    if(legajo[i]>legajo[j])
                        {
                            aux = legajo[i];
                            legajo[i]=legajo[j];
                            legajo[j]=aux;

                            strcpy(auxString,nombre[i]);
                            strcpy(nombre[i],nombre[j]);
                            strcpy(nombre[j],auxString);

                        }
                }
        }
         for(i=0;i<T;i++)
        {
            printf("%d\t%s\n",legajo[i],nombre[i]);
        }

    return 0;
}
