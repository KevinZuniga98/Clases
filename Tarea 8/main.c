#include <stdio.h>
#include <stdlib.h>
#define CANT 5
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
    int legajo;
    int nota;
    char nombre[50];

} eAgenda;

void mostrarUnAlumno(eAgenda alumnos[],int cantidad);
void cargar(eAgenda alumnos[],int cantidad);
int buscar(eAgenda alumnos[],int cantidad);
void borrar(eAgenda alumnos[],int cantidad);

int main()
{
    eAgenda alumnos[CANT];

    int opciones;
    printf("Menu de opciones");
    do
    {
        printf("\n1-Mostrar\n2-Cargar\n3-Buscar\n4-Borrar\n5-Salir\n");
        scanf("%d",&opciones);


        switch(opciones)
        {
        case 1:
            mostrarUnAlumno(alumnos,CANT);
            break;
        case 2:
            cargar(alumnos,CANT);
            break;
        case 3:
            buscar(alumnos,CANT);
            break;
        case 4:
            borrar(alumnos,CANT);
            break;

        }

    }
    while(opciones!=4);

    return 0;
}

void cargar(eAgenda alumnos[],int cantidad)
{
    int i;

    for(i=0; i<cantidad; i++)
    {
        printf("\nIngrese nombre:");
        scanf("%s",alumnos.nombre);
        printf("\nIngrese legajo:");
        scanf("%s",alumnos.legajo);
        printf("\nIngrese nota:");
        scanf("%s",alumnos.nota);
    }

}

void mostrarUnAlumno(eAgenda alumnos[],int cantidad)
{
    int i;
}
int buscar(eAgenda alumnos[],int cantidad)
{
    int i;
    int legajo;
    int loEncontre =0;

    printf("\nIngrese el numero del legajo :");
    scanf("%d",&legajo);

    for(i=0;i<cantidad;i++)
        {
            if(legajo == alumnos.legajo)
                {
                    loEncontre =1;
                }
        }

     return loEncontre;

}
void borrar(eAgenda alumnos[],int cantidad)
{

}
