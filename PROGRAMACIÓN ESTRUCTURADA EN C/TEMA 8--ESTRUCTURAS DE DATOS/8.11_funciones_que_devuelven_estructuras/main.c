#include <stdio.h>
#include <stdlib.h>

//Creamos estructura registro_piezas
typedef struct
{
    char  nombre[20];
    char  fabricante[20];
    int   cantidad;
    float precio_unidad;
} registro_piezas;

//Creamos una funcion tipo registro_piezas
registro_piezas leer_datos(void);

//creamos una funcion y le damos como parametro una estructura
void imprimir_pieza(registro_piezas resistencia);

int main()
{
    registro_piezas resistencia;

    resistencia = leer_datos();
    imprimir_pieza(resistencia);

    return(0);
}

void imprimir_pieza(registro_piezas resistencia)
{
    printf("\nArticulo:      %s\n",      resistencia.nombre);
    printf("\nFabricante:    %s\n",      resistencia.fabricante);
    printf("\nCantidad:      %d\n",      resistencia.cantidad);
    printf("\nPrecio unidad: %0.2f €\n", resistencia.precio_unidad);
}

registro_piezas leer_datos(void)
{
    registro_piezas reg;

    printf("Introduce el nombre del articulo: ");
    gets(reg.nombre);

    printf("Introduce el nombre del fabricante: ");
    gets(reg.fabricante);

    printf("Introduce el numero de piezas: ");
    scanf("%d", &reg.cantidad);

    printf("Introduce el precio por unidad: ");
    scanf("%f", &reg.precio_unidad);
    return(reg);
}
