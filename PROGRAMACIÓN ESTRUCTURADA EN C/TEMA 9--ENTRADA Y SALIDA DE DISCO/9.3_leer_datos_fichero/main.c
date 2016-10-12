#include <stdio.h>

int main()
{
    //Creamos un puntero a fichero
    FILE *fp;
    char caracter;

    //Creamos un fichero y asignamos su direccion a 'fp'
    fp = fopen("file1.txt", "r");

    while((caracter = getc(fp)) != EOF)
    {
        printf("%c", caracter);
    }
    printf("\n");

    //Cerramos el fichero creado
    fclose(fp);

    return(0);
}
