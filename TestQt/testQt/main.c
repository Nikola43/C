#include <stdio.h>
#include <stdlib.h>

//Creamos una structura
typedef struct
{
    char nombre[20];
    char fabricante[20];
    int cantidad;
    float precio_unidad;
    float total;
} registro_piezas;

int main()
{
    //Creamos un puntero tipo 'registro_piezas'
    registro_piezas *puntero_a_struct;
    float precio_total;

    //Asignamos el puntero para que apunte a la struct 'registro_piezas' y reservamos la memoria con malloc()
    puntero_a_struct = (registro_piezas *) malloc(sizeof(registro_piezas));

    printf("Introduce el nombre del articulo: ");
    gets(puntero_a_struct->nombre);

    printf("Introduce el nombre del fabricante: ");
    gets(puntero_a_struct->fabricante);

    printf("Introduce el numero de unidades: ");
    scanf("%d", &puntero_a_struct->cantidad);

    printf("Introduce el precio por unidad: ");
    scanf("%f", &puntero_a_struct->precio_unidad);

    precio_total = puntero_a_struct->precio_unidad * puntero_a_struct->cantidad;

    printf("\nArticulo:      %s\n",    puntero_a_struct->nombre);
    printf("\nFabricante:    %s\n",    puntero_a_struct->fabricante);
    printf("\nCantidad:      %d\n",    puntero_a_struct->cantidad);
    printf("\nPrecio unidad: %0.2f €\n", puntero_a_struct->precio_unidad);
    printf("\nValor total:   %0.2f €\n", precio_total);

    free(puntero_a_struct);
    return(0);
}
