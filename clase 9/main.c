#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "a.h"
#define A 5


int main()
{
    eAlumno listaDeAlumnos[A];
    int i;
    int legajo;

    for(i=0; i<A; i++)
    {
        listaDeAlumnos[i].estado=0;
    }

   //cargarListadoAlumnos(listaDeAlumnos, A);
   hardCodearAlumnos(listaDeAlumnos,A);

   sortStudentsByNameAndAverage(listaDeAlumnos,A);
   mostrarListadoAlumnos(listaDeAlumnos, A);

   printf("\nIngrese el legajo a modificar");
   scanf("%d",&legajo);
   fflush(stdin);

   modificarAlumno(listaDeAlumnos, A, legajo);



    return 0;
}

