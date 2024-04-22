#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *p;
    char cad[100];
    int i = 0;
    int cnt = 0;
    char c;
    printf("\nIngresa cadena de caracteres: ");
    gets (cad);
    cad[6] = '\0';
    p = &cad[10];
    printf("\n%s",cad);
    printf("\n%s", p);

     c = cad[i];

    while (!(c == '\0'))
    {

        if (c == 'a' || c == 'A')
        {
            cnt++;
        }
        i++;
    }
    printf("\nCantidad de A =: %d",cnt);

    for(i = 0; i < 100;i++)
    {
        if(cad[i] == '\0')
        {
            printf("\n$");
        }
        else
        {
            printf("\n%c", cad[i]);
        }
    }
}
