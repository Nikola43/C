#include <stdio.h>

char cadena[] = "Hola";

/**Programa principal*/
void main()
{
    char *ptr;

    ptr = cadena; ///or ptr = &cadena[0]
    printf("\nLa cadena de caracteres 'cadena' es: %s\n", cadena);

    printf("Dir 'ptr':     %X Val: %c\n", ptr, *ptr);
    printf("Dir 'ptr + 1': %X Val: %c\n", ptr + 1, *(ptr + 1));
    printf("Dir 'ptr + 2': %X Val: %c\n", ptr + 2, *(ptr + 2));
    printf("Dir 'ptr + 3': %X Val: %c\n", ptr + 3, *(ptr + 3));
    printf("Dir 'ptr + 4': %X Val: %c\n", ptr + 4, *(ptr + 4));

}/**Fin main*/
