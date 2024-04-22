#include <stdio.h>

/*Arreglo son elementos repetidos.
El programa al reercibir como dato un arreglo unidimensional desordenado de N elementos, obtiene como salida ese mismo arreglo pero sin los elementos repetidos */

void Lectura(int *, int);           /*Prototipos de funciones */
void Imprime(int *, int);
void Elimina(int *, int *);
/*Observa que en el prototipo de Elimina, el segundo parametro es por referencia. Esto, porque el tamano del arreglo puede disminuir*/

void main(void)
{
    int TAM, ARRE[100];
    /*Se escriben un do while para verificar que el tamano del arreglo que se ingrese sea correcto*/

    do
    {
        printf("Ingrese el tamano del arreglo: ");
        scanf("%d", &TAM);
    }
    while (TAM > 100 || TAM < 1);
    Lectura
}
