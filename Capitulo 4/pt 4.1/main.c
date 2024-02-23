#include <stdio.h>

/* Cubo-1.
El programa calcula el cubo de los 10 primeros números naturales con la
ayuda de una función. En la solución del problema se utiliza una variable
global, aunque esto, como veremos más adelante, no es muy recomendable. */

int cubo(void)              /*Prototipo de funcion*/
int I;                      /* Variable global*/

void main(void)
{
     int CUB;
    for (I = 1; <= 10; I++)
    {
        CUB = cubo();          /*LLamafa a la funcion cubo*/
        printf("\nEl cubo de %d es: %d", I, CUB);
    }
}

int cubo(void)              /*Declaracion de funcion*/
/* La funcion calcula el cubo de la variable global I. */
  {
     return (I*I*I);
  }



