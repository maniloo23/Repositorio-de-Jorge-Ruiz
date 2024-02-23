#include <stdio.h>
#include <stdlib.h>
#define SALIR 0
#define SUM 1
#define RES 2
#define MUL 3
#define DIV 4
float Rest (float, float); /*DECLARACION DE FUNCION*/
void DIV(float,float,float *); /*DECLARACION DE FUNCION*/
float Multipli(float a,float b);/*DECLARACION DE FUNCION*/
float num1; //Variables globales porque estan fuera del main
float num2; //same goes here

int main()
{
    int menu = 0;
    float num1;
    float num2;
    float result;
    printf("CALCULADORA 45\n");

do
{
    printf("\n\n1 - SUMA\n2 - RESTA\n3 - MULTIPLICACION\n4- DIVISION\n0 - SALIR\n\n:");
    scanf("%d", &menu);

    if(menu == SUM)
    {
        printf("\nIngresar Sumando 1:");
        scanf("%f", &num1);
        printf("\nIngresar Sumando 2:");
        scanf("%f", &num2);
        result = num1 + num2;
        printf("\nLa suma de %f + %f = %f",num1,num2,result);
    }

    else if (menu == RES)
    {
        printf("Ingresar Sustraendo:");
        scanf("%f", &num1);
        printf("Ingresar Minuendo:");
        scanf("%f", &num2);
        result = Rest(num1,num2);
        printf("\nLa resta de %f - %f = %f", num1,num2,result);
    }

    else if (menu == MUL)
    {

    }

    else if (menu == DIV)
    {
      printf("Ingresar Numerador:");
        scanf("%f", &num1);
        printf("Ingresar Denominador:");
        scanf("%f", &num2);
        DIV(num1,num2,&result);
        printf("\nLa division de %f / %f = %f", num1,num2,&result);

    }

    else
    {
        printf("Valor no valido");
    }
}
    while (menu != SALIR);
    return 0;

}
float Rest(float Sustraendo, float Minuendo)
{
    float tmp;

    tmp = Sustraendo - Minuendo;

    return tmp;
}

void DIV(float numerador, float denominador, float *result)
{
    float tmp;
    tmp = numerador/denominador;

    *result = tmp;
}

void Mul(void)
{
    float num1;
    float num2;
    printf("\nIngresar Multiplicando 1:");
    scanf("%f", &num1);
    printf("\nIngresar Multiplicando 2:");
    scanf("%f", &num2);
    printf("\nLa Multiplicacion de %f * %f = %f",num1,num2,Multipli(num1,num2));
}

float Multipli(float a,float b)
{
    return a * b;
}
