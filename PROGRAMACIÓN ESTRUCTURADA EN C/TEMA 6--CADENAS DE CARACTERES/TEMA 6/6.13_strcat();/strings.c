#include <stdio.h>
#include <string.h>

/**Programa principal*/
void main()
{
    char cadenaA[80] = "La programacion en C";
    char cadenaB[80] = " es interesante";

    ///A�ade 'cadenaB' a 'cadenaA', esta debe tener reservada la memoria
    strcat(cadenaA,cadenaB);     ///para almacenar el tama�o del segundo argumento

    printf("La cadena \"%s\"\n", cadenaA);
    exit(0);
}/**Fin main*/
