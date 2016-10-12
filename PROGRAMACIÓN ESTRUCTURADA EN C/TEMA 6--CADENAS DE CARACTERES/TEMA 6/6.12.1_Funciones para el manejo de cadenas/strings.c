#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**Programa principal*/
void main()
{
    char s1[] = "Cadena1";
    char s2[] = "Cadena2";
    char s3[] = "Cadena3";
    char s4[] = "ena";

    printf("\nFunciones para manejar cadenas de la lib 'string.h'\n\n");
    printf("strlen(const char*) Mide la longitud de %s: %d caracteres\n", s1, strlen(s1)); ///Devuelve la longitud de la cadena en 'int'
    printf("strcat(const char*, const char*) Concatena la cadena %s y %s en %s\n", s1, s2, strcat(s1, s2)); ///Concateda dos cadenas de caracteres
    printf("strncat(const char*, n cadenas) Concatena la cadena %s, %s y %s en: %s\n",s1,s2,s3, strncat(s1, s2, s3)); ///Concateda dos cadenas de caracteres
    printf("strcmp() %i\n", strcmp(s1,s2));
    printf("strcmp() %i\n", strchr(s1,8));
    printf("strstr() %s\n", strstr(s1,s4));
    exit(0);
}/**Fin main*/

