#include <stdio.h>
#include <stdlib.h>
#define CANTIDAD 5
/*Menu de opciones :1_Mostrar
                    2_Cargar
                    3_Buscar
                    4_Borrar
                    Legajo[]={1,3,5,9}
                    NombresAux[][50]={"Juan","Pedro","Maria","Julieta","Pepe"}
                    NotasAux[]={10,2,9,4,6}
                    */
typedef struct
{
  char nombre[50];
  int nota;
  int legajo;
  int estaVacio;//flag


}eAlumno;

void inicializarAlumnos(eAlumno listaAlumnos[],int cantidad);
void listarAlumnos(eAlumno listaAlumnos[],int cantidad);
void mostrarUnalumno(eAlumno alguno);
int dameElIndiceLibre(eAlumno listaAlumnos[],int cantidad);

int main()
{


  eAlumno listaAlumnos[CANTIDAD];
  eAlumno alumno;

  inicializarAlumnos(listaAlumnos,CANTIDAD);
  listarAlumnos(listaAlumnos,CANTIDAD);

   alumno.legajo=999;
   alumno.nota=10;
   alumno.estaVacio=0;
int indice;
indice=dameElIndiceLibre(listaAlumnos,CANTIDAD);
if(indice!=1)
    {
         listaAlumnos[indice]=alumno;
    }
 else
    {
        printf("no hay lugar libre");
    }
   listarAlumnos(listaAlumnos,CANTIDAD);
    return 0;
}

void inicializarAlumnos(eAlumno listaAlumnos[],int cantidad)
{
    int i;

    for(i=0;i<5;i++)
    {
        listaAlumnos[i].estaVacio=1;
    }
}

void listarAlumnos(eAlumno listaAlumnos[],int cantidad)
{
     int i;
     int tieneAlumnos =0;
     for(i=0;i<cantidad;i++)
        {
            if(listaAlumnos[i].estaVacio==0)
                {
                     tieneAlumnos=1;
                     listarAlumnos(listaAlumnos[i]);
                }
                if(tieneAlumnos ==0)
                    {
                        printf("No hay alumnos para mostrar\n");
                    }

        }
}

void mostrarUnalumno(eAlumno alguno)
{
    printf("%s",alguno.nombre);
    printf("%d",alguno.nota);
    printf("%d",alguno.legajo);

}
int dameElIndiceLibre(eAlumno listaAlumnos[],int cantidad)
{
    int i;
    int indiceLibre =-1;
    for(i=0;i<cantidad;i++)
        {
             if(listaAlumnos[i].estaVacio ==1)
                {
                    return i;
                }
        }
  return -1;

}
