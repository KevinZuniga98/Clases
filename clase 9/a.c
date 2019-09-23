#include "a.h"
#include <string.h>

void hardCodearAlumnos(eAlumno listadoDeAlumnos[], int tam)
{
    int i;
    int legajo[]= {101,102,105};
    float promedio[]= {6.66, 4,7.66};
    char nombre[][25]= {"Juan","Maria josefina","Maria"};
    int localidad [3] ={1,2,3};

    for(i=0; i<3; i++)
    {
        listadoDeAlumnos[i].legajo = legajo[i];
        listadoDeAlumnos[i].promedio = promedio[i];
        strcpy(listadoDeAlumnos[i].nombre, nombre[i]);
        listadoDeAlumnos[i].estado = 1;
        listadoDeAlumnos[i].localidad = localidad[i];

    }


}

void mostrarListadoAlumnos(eAlumno listadoDeAlumnos[], int tam)
{
    int i;

    for(i=0; i<tam; i++)
    {
        if(listadoDeAlumnos[i].estado!=0)
        {
            mostrarUnAlumno(listadoDeAlumnos[i]);
        }

    }
}

void cargarListadoAlumnos(eAlumno listadoDeAlumnos[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        listadoDeAlumnos[i] = cargarAlumno();
    }
}

eAlumno cargarAlumno(void)
{
    eAlumno miAlumno;

    printf("Ingrese legajo: ");
    scanf("%d", &miAlumno.legajo);
    printf("Ingrese nombre: ");
    fflush(stdin);
    scanf("%[^\n]", miAlumno.nombre);
    printf("Ingrese promedio: ");
    scanf("%f", &miAlumno.promedio);
    printf("Ingrese localidad");
    scanf("%f", &miAlumno.localidad);

    miAlumno.estado = 1;

    return miAlumno;
}
void mostrarUnAlumno(eAlumno miAlumno)
{
    printf("%4d %25s %8.2f\n",miAlumno.legajo,miAlumno.nombre, miAlumno.promedio);
}

void sortStudentsByNameAndAverage(eAlumno listadoDeAlumnos[], int tam)
{
    int i;
    int j;
    eAlumno auxAlumno;

    for(i=0; i<tam-1; i++)
    {
        for(j=i+1; j<tam; j++)
        {
            if(strcmp(listadoDeAlumnos[i].nombre,listadoDeAlumnos[j].nombre)>0)
            {
                auxAlumno = listadoDeAlumnos[i];
                listadoDeAlumnos[i] = listadoDeAlumnos[j];
                listadoDeAlumnos[j] = auxAlumno;
            }
            else
            {
                if(strcmp(listadoDeAlumnos[i].nombre,listadoDeAlumnos[j].nombre)==0)
                {
                    if(listadoDeAlumnos[i].promedio>listadoDeAlumnos[j].promedio)
                    {
                        auxAlumno = listadoDeAlumnos[i];
                        listadoDeAlumnos[i] = listadoDeAlumnos[j];
                        listadoDeAlumnos[j] = auxAlumno;
                    }
                }
            }
        }

    }





}
int modificarAlumno(eAlumno* listadoDeAlumnos,int cantidad,int legajo)
{
    int retorno = -1;
    eAlumno aux;
    int r,i;
    float auxPromedio;

    for(i=0; i<cantidad; i++)
    {
        if(listadoDeAlumnos[i].estado == 1 && legajo == listadoDeAlumnos[i].legajo)
        {
            retorno = 1;

            do
            {
                printf("\nQue quiere modificar?\n1.Nombre\n2.Promedio\n3.Salir");
                scanf("%d",&r);
                fflush(stdin);
                switch(r)
                {
                case 1:

                    printf("\nIngrese el nombre a modificar");
                    gets(aux.nombre);
                    fflush(stdin);
                    strcpy(listadoDeAlumnos[i].nombre,aux.nombre);
                    break;

                case 2:
                    printf("\nIngrese el promedio a modificar");
                    scanf("%f",&auxPromedio);
                    fflush(stdin);
                    listadoDeAlumnos[i].promedio = auxPromedio;
                    break;
                }
            }while(r!=3);
        }
    }
    return retorno;

}
