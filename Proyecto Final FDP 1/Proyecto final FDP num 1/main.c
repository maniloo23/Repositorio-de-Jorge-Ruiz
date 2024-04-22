#include <stdio.h>
#include <math.h>                   /*Estas tres son bibliotecas*/
#include <string.h>

int main() {
    float cantidad, tasaAnual;
    int tiempo, menu;
    char Nom_archivo[50], nombre[50];
    float sumas_total = 0;                      /*DECLARACION DE VARIABLES TIPO ENTERO Y FLOTANTES*/
    float sumap_total = 0;
    float Cinteres = 0;
    int Ctiempo = 0;

    printf("\n\t\t\t Bienvenido a nuestra Calculadora de Amortizacion de Prestamos\n");                /*Mensaje de bienvenida*/


    /*AQUI EMPIEZA UN BUCLE DO-WHILE, aqui las condiciones se repetiran siempre y cuando esten de acuerdo con lo establecido. Utilizamos esto para el menu*/
    do
        {
        printf("\n\n\t\t\t\t *Como podemos asistirle en el dia de hoy?*\n\n");
        printf("\n0 - Salir de la Calculadora\n");
        printf("1 - Ingresar los Parametros y Calcular su Prestamo\n");             /*Opciones del menu*/
        printf("2 - Guardar su Prestamo\n");
        scanf("%d", &menu);

        switch (menu)    /*Usamos el switch para saber que hacer en caso de que se seleccione cualquier opcion del menu*/
         {
            case 0:
                printf("\n\n\t Pudo salir del programa exitosamete, Gracias por Preferirnos!\n");           /*Se saldra del programa en caso de oprimir 0*/
                return 0;


            case 1:     /*En este caso se ingresan los parametros para calcular el prestamo y se refleja una tabla con el mismo. En la tabla reflejamos el pago mensual, pago pendiente, pago de interes y el monto total*/



                fflush(stdin);
                printf("\nIngrese Nombres y Apellidos: "); /*Recopilacion de datos*/
                gets(nombre);

                printf("Especifique el Cantidad Prestada: "); /*Recopilacion de datos*/
                scanf("%f", &cantidad);
                sumas_total = cantidad;

                printf("Ingrese la Tasa de Interes Anual: ");   /*Recopilacion de daots*/
                scanf("%f", &tasaAnual);
                Cinteres = tasaAnual;

                printf("Ingrese el Tiempo Estipulado para el Prestamo en Meses: ");         /*Recopilacion de daots*/
                scanf("%d", &tiempo);
                Ctiempo = tiempo;

                float tasaMensual = tasaAnual / 12.0 / 100.0;                                                /*Formulas matematicas para calcular datos de la tabla*/
                float pago_mensual = cantidad * (tasaMensual / (1 - pow((1 + tasaMensual), -tiempo)));      /*Formulas matematicas para calcular datos de la tabla*/

                printf("\n\nMes\tPendiente por Pagar\tPago Principal\tPago de Interes\tMonto Total\n");         /*Titulos de la Tabla de amortizacion*/
                float saldo_prestamo = cantidad;

                for (int mes = 1; mes <= tiempo; mes++) /*Aqui mediante formulas matemaicas, empiezan a colocarse los datos en la tabla de forma especifica. Todo lo hacemos mediante un for. Un for es un bucle en el que podemos especificar la cantidad de veces que queremos que se repita un bucle */
                    {
                    float pago_interes = saldo_prestamo * tasaMensual;
                    float pago_principal = pago_mensual - pago_interes;
                    saldo_prestamo -= pago_principal;
                    sumap_total += pago_mensual;
                    printf("%d\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f\n", mes, saldo_prestamo, pago_principal, pago_interes, pago_mensual);       /*Los resultados de las formulas matematicas se guardan en estas variables y son relfejadas en la table*/
                }
                break;


            case 2:             /*En caso de oprimir el 2, podemos guardar la tabla de amortizacion creada en un archivo en el disco*/

                fflush(stdin);
                printf("\nEspecifique nombre de su archivo y en el formato en el que sera guardado: \n");       /*Preguntamos el formato y nombre del archivo que queremos guardar*/
                memset(Nom_archivo, 0, sizeof(Nom_archivo)); /*llenamos nomarchivo de ceros para evitar cualquier tipo de datos residuales*/
                getchar();  /*consume el carácter de nueva línea que queda en el búfer de entrada después de la lectura anterior*/
                gets(Nom_archivo); /*Aqui nombramos el archivo*/

                FILE *archivo_l = fopen(Nom_archivo, "w"); /*Abrimos el archivo creado y escribimos los datos de la tabla de amortizacion si no existe y si ya existe se sobreescribira*/
                if (archivo_l == NULL) /*Con el if comprobamos que si el archivo se pudo crear. Si no se pudo crear, imprimiremos un mensaje de error*/
                    {
                    printf("Lamentablemente no pudimos crear su archivo, intente de nuevo.\n"); /*Mensaje de error*/
                    break;
                }

                fprintf(archivo_l, "Indique su primer nombre y apellido: %s\n", nombre);
                fprintf(archivo_l, "Dinero prestado: %.2f\n", sumas_total);                         /*Escribimos los datos del prestamo en el archivo*/
                fprintf(archivo_l, "Porcentaje de Interes Simple: %.2f\n", Cinteres);
                fprintf(archivo_l, "Monto Saldo: %.2f\n", sumap_total);

                fclose(archivo_l); /*El archivo se cierra*/

                printf("\n\n\t\tLa recopilacion de datos ha sido guardada correctamente.\n"); /*Mensaje de alerta que notifica al usuario que el archivo se creo y se guardo correctamente*/
                break;


            default:    /*Imprime la opcion predeterminada del switch. En caso de seleccionar una oprion no valida (fuera del 0, 1 y 2), se imprimira un mensaje de error*/
                printf("Opción no válida. Por favor, seleccione una opción válida.\n");     /*Mensaje de error*/
                break;
        } /*TERMINA EL BUCLE SWITCH*/

    } while (menu != 0); /*TERMINA EL BUCLE DO-WHILE*/

    return 0; /*return se usa en este caso para indicar que el bucle main acabo*/
} /*Termina el main*/

/*Termina el programa, espero que le haya gustado este proyecto :)*/
