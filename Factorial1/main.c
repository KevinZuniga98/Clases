#include <stdio.h>
#include <stdlib.h>
/** \brief
 *
 * \param
 * \param
 * \return
 *
 */
int factorial (int);
int main()
{
    int numero = 5;
    int resultado;


    resultado = factorial (numero);
    printf("El factorial es : %d", resultado);

    return 0;
}

int factorial (int numero)
{

    int resultado;

    if (numero == 0)
        {
             resultado = 1;
        }

    else
    {
        resultado = numero * factorial(numero-1);
    }
    return resultado;
}

