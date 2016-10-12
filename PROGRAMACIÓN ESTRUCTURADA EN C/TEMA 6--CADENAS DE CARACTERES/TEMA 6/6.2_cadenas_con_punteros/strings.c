#include <stdio.h>

char cadena[] = "Hola";

/**Programa principal*/
void main()
{
    char *ptr;

    ptr = cadena; ///or ptr = &cadena[0]
    printf("\nLa cadena de caracteres 'cadena' es: %s\n", cadena);
    printf("%c\n",*ptr);
    printf("%c\n",*(ptr + 1));
    printf("%c\n",*(ptr + 2));
    printf("%c\n",*(ptr + 3));
    printf("%c\n",*(ptr + 4));

}/**Fin main*/
