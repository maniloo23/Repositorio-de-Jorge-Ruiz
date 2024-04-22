#include <stdio.h>


/* Elección.
El programa almacena los votos emitidos en una elección en la que hubo cinco
➥candidatos e imprime el total de votos que obtuvo cada uno de ellos. */

void main(void)
{
    int ELE[5] = {0}; /*Declaracion de arreglo enter ELE de cinco elementos iniclaizando todos en 0*/
    int I, VOT;
    printf("Ingresa el primer voto (0 - Para terminar): ");
    scanf("%d", &VOT);
    while (VOT)
    {
        if ((VOT > 0) && (VOT < 6))         /* Se verifica que le vot sea correcto */
            ELE[VOT-1]++;               /* Los votos se almacenan en el arreglo.Recuerda que la primera posición del arreglo es 0, por esa razón a lavariable VOT se le descuenta 1. Los votos del primer candidato sealmacenan en la posición 0. */
        else
            printf("\nEL voto ingresado es incorrecto.\n");
        printf("Ingresa el siguiente voto (0 - Para terminar ");
        scanf("%d", &VOT);
    }
    printf("\n\nResultados de la Eleccion\n");
    for (I = 0; I <= 4; I++)
        printf("\nCandidato %d: %d", I+1, ELE[I]);
}
