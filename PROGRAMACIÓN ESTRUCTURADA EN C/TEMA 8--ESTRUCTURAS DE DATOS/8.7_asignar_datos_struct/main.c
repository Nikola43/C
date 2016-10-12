#include <stdio.h>

int main()
{
    //Creamos una estructura llamada resistencia
    struct
    {
        char nombre[20];
        char fabricante[20];
        int cantidad;
        float precio_unidad;
        float total;
    } resistencia;

    //Leemos los datos para guardar en los miembros de la estructura
    //Accedemos a los miembros de la estructura con el .
    printf("Introduce el nombre del articulo: ");
    gets(resistencia.nombre);

    printf("Introduce el nombre del fabricante: ");
    gets(resistencia.fabricante);

    printf("Introduce el numero de piezas: ");
    scanf("%d", &resistencia.cantidad);

    printf("Introduce el precio por unidad: ");
    scanf("%f", &resistencia.precio_unidad);

    resistencia.total = resistencia.precio_unidad * resistencia.cantidad;

    printf("\nArticulo:     %s\n", resistencia.nombre);
    printf("\nFabricante:   %s\n", resistencia.fabricante);
    printf("\nCantidad:     %d\n", resistencia.cantidad);
    printf("\nPrecio unidad %0.2f\n", resistencia.precio_unidad);
    printf("\nValor total:  %0.2f\n", resistencia.total);
    return(0);
}
