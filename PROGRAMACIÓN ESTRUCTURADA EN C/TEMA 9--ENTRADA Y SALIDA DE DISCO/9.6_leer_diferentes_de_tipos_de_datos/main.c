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

int main()
{
    char  nombre_pieza[15];
    int   cantidad;
    float precio_unidad;
    FILE *fp;

    fp = fopen("PIEZAS.DAT", "r");


    while((fscanf(fp, "%s %d %f", &nombre_pieza[0], &cantidad, &precio_unidad)) != EOF)
        printf("%s %d %f\n", nombre_pieza, cantidad, precio_unidad);


    fclose(fp);

    return(0);
}

