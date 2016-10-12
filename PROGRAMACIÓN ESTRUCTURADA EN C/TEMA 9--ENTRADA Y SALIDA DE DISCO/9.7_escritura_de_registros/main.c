/*
 * MODOS DE APERTURA DE FICHERO
 *
 * "a"  abre fichero para escritura, escribe los datos al final, si no existe lo crea
 * "r"  abre fichero para lectura, debe existir
 * "w"  abre fichero para escritura, sobreescribe los datos, si no existe se crea
 * "a+" abre el fichero para lectura y añadir datos, si no existe se crea
 * "r+" abre el fichero para lectura y escritura, debe existir el fichero
 * "w+" abre el fichero para lectura y escritura, se escribe desde el principio
 * "b"  abre el fichero en modo binario
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nombre[20];
    int cantidad;
    float precio_unidad;
} TIPO_PIEZA;

int main()
{
    TIPO_PIEZA pieza;
    FILE *fp;

    fp = fopen("PIEZAS.txt", "wb");

        printf("Introduce el nombre de la pieza: ");
        gets(pieza.nombre);

        printf("Introduce la cantidad de piezas: ");
        scanf("%d", &pieza.cantidad);

        printf("Introduce el precio de la pieza: ");
        scanf("%f", &pieza.precio_unidad);

        fwrite(&pieza, sizeof(pieza), 1, fp);

    fclose(fp);

    return(0);
}

