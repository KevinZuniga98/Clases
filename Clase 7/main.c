#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*TAREA: char nombre[15]; no se puede modificar
         char apellido[15]; no se puede modificar
         char apellidoNombre[30]; este SI SE PUEDE MODIFICAR Y CONCATENAR
         usuario ingresa nombre y apellido, la tercera variable guardara Apellido, Nombre : Zuñiga, Kevin*/
int main()
{
    /*cadena de caracteres
    char palabra[10]="adios";
    char copiaPalabra[10]="chau";
    int i;
    int largo;
    int comp;

    for(i=0; i<5; i++)
    {
        printf("Ingrese una palabra : \n");
        fflush(stdin);
        gets(palabra);// o scanf("%[^\n]",palabra);
        printf("%s\n", palabra);

    }

    largo = strlen(palabra);
    printf("El largo es : %d ",largo);

    strcpy(palabra,copiaPalabra);
    printf("%s\n", palabra);
    strupr(palabra);//strlwr(palabra);
    comp=stricmp(palabra,copiaPalabra);
    printf("\ncomparacion :%d",comp); // 0 = son iguales, -0= primera palabra chico,1=primera palabra grande
    strcat(palabra,copiaPalabra);
    printf("\nConcatenacion : %s", palabra);*/

    char nombre[15];
    char apellido[15];
    char apellidoNombre[30];
    char auxString[1000];
    int i;
    int len;

    printf("Ingrese el nombre : \n");
    fflush(stdin);
    gets(auxString);
    while(strlen(auxString)>14)
        {
            printf("Ingrese el nombre : \n");
            fflush(stdin);
            gets(auxString);
        }
      strcpy(nombre,auxString);

    printf("Ingrese el apellido : \n");
    fflush(stdin);
    gets(apellido);


    strcat(apellidoNombre,apellido);
    starcat(apellidoNombre,", ");
    strcpy(apellidoNombre,nombre);
    printf("%s",apellidoNombre);





    return 0;
}
