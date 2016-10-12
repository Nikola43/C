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
    registro_piezas *ptr_reg;
    float precio_total;

    //Asignamos el puntero para que apunte a la struct 'registro_piezas' y reservamos la memoria con malloc()
    ptr_reg = (registro_piezas *) malloc(sizeof(registro_piezas));

    printf("Introduce el nombre del articulo: ");
    gets(ptr_reg->nombre);

    printf("Introduce el nombre del fabricante: ");
    gets(ptr_reg->fabricante);

    printf("Introduce el numero de piezas: ");
    scanf("%d", &ptr_reg->cantidad);

    printf("Introduce el precio por unidad: ");
    scanf("%f", &ptr_reg->precio_unidad);

    precio_total = ptr_reg->precio_unidad * ptr_reg->cantidad;

    printf("\nArticulo:      %s\n",    ptr_reg->nombre);
    printf("\nFabricante:    %s\n",    ptr_reg->fabricante);
    printf("\nCantidad:      %d\n",    ptr_reg->cantidad);
    printf("\nPrecio unidad: %0.2f €\n", ptr_reg->precio_unidad);
    printf("\nValor total:   %0.2f €\n", precio_total);

    free(ptr_reg);
    return(0);
}
