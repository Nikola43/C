#include <stdio.h>
#include <stdlib.h>
#define NUM_STRUCTURAS 3

//definimos una estructura
typedef struct
{
    char componente[50];
    int cantidad;
    float precio_unidad;
    char existe;
} registro_piezas;

//Creamos una funcion para imprimir por pantalla los miembros de la estructura
void printComponente(registro_piezas pieza); //Toma como argumento una estructura

int main()
{
    //Creamos una array con 3 estructuras
    registro_piezas array[NUM_STRUCTURAS];

    int reg;
    int i;

    do
    {
        //Preguntamos en que estructura quiere almacenar los datos
        printf("\nIntroduce la caja(1,2,3,) 4 para salir: ");
        scanf("%d", &reg);

        //Si la eleccion es una estructura valida
        if(reg >= 0 && reg <= NUM_STRUCTURAS)
        {

            printf("Introduce la pieza: ");
            scanf("%s", &array[reg].componente);

            printf("Introduce la cantidad: ");
            scanf("%d", &array[reg].cantidad);

            printf("Introduce el precio por unidad: ");
            scanf("%f", &array[reg].precio_unidad);

            array[reg].existe = 'V';
        }

    }while(reg != 4);
    //Leemos hasta que el usuario ingresa 4 (Salir)

    for(i = 0; i <= 3; i++)
    {
        if(array[i].existe == 'V')  //Si el miembro existe es == a 'V' se imprime
        {
            printf("\nLa caja %d contiene: \n", i);
            printf("\nComponente:    %s\n", array[i].componente);
            printf("\nCantidad:      %d\n", array[i].cantidad);
            printf("\nPrecio unidad: %0.2f €\n\n", array[i].precio_unidad);
        }
    }

    return(0);
}
