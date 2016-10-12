#include <stdio.h>
#include <string.h>

int concat_cadenas(char s1[], char s2[]);

/**Programa principal*/
void main()
{
    char cadenaA[80] = "La programacion en C";
    char cadenaB[80] = " es interesante";

    ///Añade 'cadenaB' a 'cadenaA', esta debe tener reservada la memoria
    concat_cadenas(cadenaA,cadenaB);     ///para almacenar el tamaño del segundo argumento

    printf("La cadena \"%s\"\n", cadenaA);
}/**Fin main*/


int concat_cadenas(char s1[], char s2[])
{
    int pos;
    int j;
    int longitud;

    pos = strlen(s1);
    longitud = strlen(s2);
    for(j=0;j<longitud;j++)
    {
        s1[pos] = s2[j];
        pos++;
    }
        s1[pos] = '\0';
}
