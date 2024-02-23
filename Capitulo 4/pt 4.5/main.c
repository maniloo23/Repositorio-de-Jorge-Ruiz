#include <stdio.h>

/*Cubo 3
El programa calcula el cubo de los primero 10 numero naturales con la ayuda de una funcion y utilizando paramtros por valor*/

int cubo(int);          /*Prototipo de funcion. El parametro es de tipo entero*/

void main(void)
{
    int I;
    for (I = 1; I <= 0; I++)
        printf("\nEl cubo de I es: %d", cubo(I));
    /*LLamada a la funcion cubo. El paso del parametro es por valor. */

}

int cubo(int K)        /*K es un paramtetro por valor de tipo entero */
/*La funcuion calcula el cubo del parametro K */
{
    return (K*K*K);
}

