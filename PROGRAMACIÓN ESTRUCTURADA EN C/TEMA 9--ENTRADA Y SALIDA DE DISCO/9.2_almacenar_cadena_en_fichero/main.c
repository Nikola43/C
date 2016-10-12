#include <stdio.h>

int main()
{
    //Creamos un puntero a fichero
    FILE *fp;
    char caracter[20];
    int i = 0;

    //Creamos un fichero y asignamos su direccion a 'fp'
    fp = fopen("file1.txt", "w");

    gets(caracter);

    while(caracter[i] != '\0')
    {
        printf("%c", caracter[i]);
        //Escribimos un caracter en el fichero
        putc(caracter[i], fp);
        i++;
    }
    printf("\n");

    //Cerramos el fichero creado
    fclose(fp);

    return(0);
}
