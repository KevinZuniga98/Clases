#include <stdio.h>
typedef struct
{
    int id;
    char descripcion[30];
    int cp;

}eLocalidad;

typedef struct
{
    int legajo;
    char nombre[29];
    float promedio;
    int estado;
    eLocalidad localidades;
    int localidad;

} eAlumno;

eAlumno cargarAlumno(void);
void mostrarUnAlumno(eAlumno);

void cargarListadoAlumnos(eAlumno[], int);
void mostrarListadoAlumnos(eAlumno[], int);
void hardCodearAlumnos(eAlumno[], int);
void sortStudentsByNameAndAverage(eAlumno[], int);
int modificarAlumno(eAlumno[],int cantidad,int legajo);
