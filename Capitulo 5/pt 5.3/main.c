#include <stdio.h>

/* Apuntadores, variables y valores */

void main(void)
{
    int X = 3, Y = 7, Z[5] = {2, 4, 6, 8, 10};
printf("\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[3] = %d \t Z[4]➥= %d", X, Y,Z[0], Z[1], Z[2], Z[3], Z[4]);

int *IX; /* IX representa un apuntador a un entero. */
IX = &X; /* IX apunta a X. IX tiene la direccion de X. */
Y = *IX; /* Y toma el valor de X, ahora vale 3. */
*IX = 1; /* X se modifica, ahora vale 1. */

printf("“\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d\t Z[4] = %d", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);





}
