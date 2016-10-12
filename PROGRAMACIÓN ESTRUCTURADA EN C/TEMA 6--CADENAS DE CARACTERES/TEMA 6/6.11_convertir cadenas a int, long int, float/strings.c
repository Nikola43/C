#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**Programa principal*/
void main()
{
    char cadena_int[10] = "10"; ///string de 10 caracteres
    int numero_int=0;

    char cadena_long_int[20] = "200000000" ; ///string de 10 caracteres
    long int numero_long_int=0;

    char cadena_float[10] = "5.67"; ///string de 10 caracteres
    float numero_float=0;

    ///Convertir numeros
    numero_int = atoi(cadena_int);
    numero_long_int = atol(cadena_long_int);
    numero_float = atof(cadena_float);

    printf("La cadena %s se convierte a int: %d\n", cadena_int, numero_int);
    printf("La cadena %s se convierte a int: %d\n", cadena_long_int, numero_long_int);
    printf("La cadena %s se convierte a int: %f\n", cadena_float, numero_float);
}/**Fin main*/

