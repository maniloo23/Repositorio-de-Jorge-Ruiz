#include <stdio.h>

/*Combinacion de variables globales y locales, y parametros por valor y por referencia */

int a, b, c, d;              /* Variables globales */

void funcion1(int *, int *);
/* Prototipo de funcion. Observa que los dos parametros son por referncia. */

int funcion2 (int, int *);
/* En este prototipo el primer parametro es por valor y el segundo por referencia */

void main(void)
{
    int a;          /* A es variable local en este caso*/
    a = 1;          /* Se asigna un valor a la variable local a */
    b = 2;          /* Se asignan valores a las variables globales b, c y d*/
    c = 3;
    d = 4;
    printf("\n%d %d %d %d", a, b, c, d);
    funcion1 (&b, &c);
    printf("\n%d %d %d %d", a, b, c, d);
    a = funcion2(c, &d);
    printf("\n%d %d %d %d", a, b, c, d);
}

void funcion1(int *b, int *c)
{
    int d;
    a = 5;   /* Obsserva que se hace referencia a la variable global a */
    d = 3;   /* Nota que se hace referencia a la varibale local d. */
    (*b)++;
    (*c) += 2;
    printf("\n%d %d %d %d", a, b, c, d);
}

int funcion2(int c, int *d)
{
    int b;
    a++;
    b = 7;
    c += 3;
    (*d) += 2;
    printf("\n%d %d %d %d", a, b, c, *d);
    return (c);
}
