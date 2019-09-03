#include <stdio.h>
#include <stdlib.h>

void funcion(int* );
int main()
{
    int numero = 4;
    printf("El numero es %d", numero);

    funcion(&numero);
    printf("\nEl numero despues es %d ",numero );
    return 0;
}
void funcion(int* numero)
{


     *numero = 100;


}
