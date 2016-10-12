#include <stdio.h>

int main()
{
    //Creamos un puntero a fichero
    FILE *fp;

    //Creamos un fichero y asignamos su direccion a 'fp'
    fp = fopen("file1.txt", "w");

    //Escribimos un caracter en el fichero
    putc('C', fp);

    //Cerramos el fichero creado
    fclose(fp);

    return(0);
}
