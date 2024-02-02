#include <stdio.h>
#include <stdlib.h>

int main()
{
    //definicion e inializaion de una var.
    float x = 0.0;
    float b = 0.0;
    int cont = 0;
    printf("Calculo de Raiz Cuadrada\n");
    scanf("%f",&x);
    b = x;

    while(!(b == (x/b)))
    {
        printf("Ciclo de calculo: %d", cont);
        printf("\nLa raiz cuadrada de %f es: %.4f\n",x,b);
        b = 0.5 * ( (x/b)+b) ;
        cont++;
    }

    return 0;
}
