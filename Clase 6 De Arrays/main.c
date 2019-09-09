#include <stdio.h>
#include <stdlib.h>
#include "array.h"
#define MAX 5



int main()
{
    //hacer un ARRAY DE SILLA, LEGAJO Y EDAD,PEDIR EL MAXIMO Y MINIMO, CUANTAS SILLAS HAY OCUPADAS,LIBRES,CLIENTE MAS VIEJO CON LEGAJO POSICON DE SILLA Y EDAD
    // cantidad 5 edad = 20,30,40,50,0
    //cantidad legajos = 100,110,200,190,180

     int sillas[MAX];
     int edad[MAX];
     int legajo[MAX];
     int maximo;
     int minimo;
     int sOcupadas;
     int sLibres;
     int clienteV;

     inicializacion(sillas, MAX);
     //legajo(sillas, MAX);
     hardcodeoLegajo(legajo,MAX);
     mostrarLegajo(legajo, MAX);
    // pideEdad(edad, MAX);
     hardcodeoEdad(edad,MAX);
     mostrarEdad(edad, MAX);

     maximo =legajoMaximo(legajo,MAX);
     printf("\nEl legajo maximo es : %d",maximo);//200

     /*minimo =legajoMinimo(sillas, MAX);
     printf("\nEl legajo minimo es : %d",minimo);//100

     sOcupadas =sillasOcupadas(sillas, MAX);
     printf("\nSillas ocupadas : %d",sOcupadas);

     sLibres=sillasLibres(sillas, MAX);
     printf("\nSillas libres : %d", sLibres);

     clienteV =clienteMasViejo(edad,MAX);
     printf("\nCliente mas viejo : %d",clienteV);*/

     mostrarTodo(legajo,edad,MAX);
     clienteMasViejo(sillas,legajo,edad,MAX);

    return 0;
}


