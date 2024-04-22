#include <stdio.h>

void main(void)
{
    int fac [5];
    int total = 0;

    fac [0] = 1500;
    fac [1] = 100;
    fac [2] = 800;
    fac [3] = 0;
    fac [4] = 0;

    for(int i = 0; i < 5; i++)
    {
        total += fac[i];
        printf("\nValor fact[%d] = %d",i,fac[1]);
    }
    printf("\nValor total: %d",total);
}
