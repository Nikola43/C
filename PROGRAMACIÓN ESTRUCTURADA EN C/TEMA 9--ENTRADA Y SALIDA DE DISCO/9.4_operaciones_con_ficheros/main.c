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

void grabar(FILE *fp);
void leer(FILE *fp);

int main()
{
    char selec[2];
    char fname[20];
    char elec[2];
    int val_selec;
    FILE *fp;

    //Mostrar las opciones al usuario
    printf("1. Crear fichero\n");
    printf("2. Escribir sobre fichero existente\n");
    printf("3. Añadir datos sobre fichero existente\n");
    printf("4. Leer datos desde un fichero existente\n");

    do
    {
        printf("Selecciona una de las siguientes opciones: ");
        gets(elec);
        val_selec = atoi(elec);
        switch(val_selec)
        {
            case 1 :
            case 2 : strcpy(selec, "w"); break;
            case 3 : strcpy(selec, "a"); break;
            case 4 : strcpy(selec, "r"); break;
            default : printf("Opcion no valida!\n"); val_selec = 0;
        }
    } while(val_selec == 0);

    printf("Introduzca el nombre de fichero: ");
    gets(fname);

    if((fp = fopen(fname, selec)) == NULL)
    {
        printf("No se pudo abrir el fichero %s\n", fname);
        exit(-1);
    }
    else
    {
        switch(val_selec)
        {
            case 1 : break;
            case 2 : grabar(fp); break;
            case 3 : grabar(fp); break;
            case 4 : leer(fp);   break;
        }
    }

    return(0);
}

void grabar(FILE *fp)
{
    int i = 0;
    char caracter[20];
    printf("Introduce una cadena: ");
    gets(caracter);

    while(caracter[i] != '\0')
    {
        putc(caracter[i], fp);
        i++;
    }
}

void leer(FILE *fp)
{
    int i = 0;
    char caracter[20];

    while((caracter[i] = getc(fp)) != EOF)
    {
        printf("%c", caracter[i]);
        i++;
    }
    printf("\n");

}
