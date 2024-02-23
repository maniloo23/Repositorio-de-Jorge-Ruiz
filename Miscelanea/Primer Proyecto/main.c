#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ed = 0;
    int menu = 1;

    while(menu == 1)
    {
        printf("\nIngresa tu edad o -1 para salir: ");
        scanf("%d",&ed);
        if(ed == -1)
        {
            menu =0;
        }
        else
        {
            if(ed <= 0 || ed > 130)
            {
                printf("\nedad falsa\n");
            }
            else
            {
                if(ed > 17)
                {
                    printf("\nEres Mayor de Edad\n");
                }
                else
                {
                    printf("\nEres Menor de Edad\n");
                }
            }
        }
    }
    return 0;
}
