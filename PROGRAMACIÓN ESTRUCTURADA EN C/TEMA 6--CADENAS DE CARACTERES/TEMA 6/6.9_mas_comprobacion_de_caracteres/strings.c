#include <stdio.h>
#include <ctype.h>

/**Programa principal*/
void main()
{
    char cadena[80];
    int i = 0;

    printf("Introduce una cadena que incluya caracteres, signos de puntuacion y digitos\n");
    printf("--->: ");
    gets(cadena);
    while(cadena[i] != '\0') ///recorre la cadena hasta que termina
    {
        if((0 == ispunct(cadena[i])) && (0 == isdigit(cadena[i])))
        {
            if(0 != islower(cadena[i]))
                cadena[i] == cadena[i] & 0xdf;
            printf("%c", cadena[i]);
        }
        i++;

    }
}/**Fin main*/
