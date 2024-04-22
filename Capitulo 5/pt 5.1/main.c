#include <stdio.h>

/* Cuenta-números.
El programa, al recibir como datos un arreglo unidimensional de tipo
➥entero y un número entero, determina cuántas veces se encuentra el
➥número en el arreglo. */

void main(void)
{
    int I, NUM, CUE = 0;
    int ARRE[100];
    for (I=0; I<100; I++)
    {
        printf("Ingrese el elemento %d del arreglo: ", I+1);
        scanf("%d", &ARRE[I]);      /*lectura de asignacion del arreglo */
    }
    printf("\n\nIngrese le numero que se va a busvar en el arreglo:  ");
    scanf("%d", &NUM);
    for (I=0; I<100; I++)
        if (ARRE[1] == NUM)   /* Comparación del número con los elementos delarreglo */

      CUE++;
      printf("\n\nEl %d se encuentra %d veces en el arreglo", NUM, CUE);

}
