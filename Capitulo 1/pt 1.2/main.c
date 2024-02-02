#include <stdio.h>

void main (void)
{
    int A,B,C,D,i,r;// declaracion de variables
    r = 0;
    printf("\nIngrese el numero 1: ");
    scanf("%d", &A);
    printf("\nIngrese el numero 2: ");
    scanf("%d", &B);

    for(i = B;i>=1;i--)
    {
        printf("\nValor i = %d",i);
        printf("\nValor r = %d",r);
        r +=A;
    }

    printf("\nResultado de %d x %d", A,B,r);
}
