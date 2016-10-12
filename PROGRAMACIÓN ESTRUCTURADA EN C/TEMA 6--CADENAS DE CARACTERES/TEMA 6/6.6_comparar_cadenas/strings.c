#include <stdio.h>

///Funcion para recoger el nombre
int mismo_tamano(char s1[], char s2[]);

/**Programa principal*/
void main()
{
    char str1[] = {'U','n','o','\0'};
    char str2[] = "Dos";
    char str3[] = "Tres";

    if(1 == mismo_tamano(str1, str2))
        printf("Las cadenas: %s y %s son identicas", str1, str2);
    else
        printf("Las cadenas: %s y %s no son identicas", str1, str2);

}/**Fin main*/


int mismo_tamano(char s1[], char s2[])
{
    int i = 0;
    int j = 0;

    while('\0' != s1[i])
        i++;

    while('\0' != s2[j])
        j++;

    if(i == j)
        return(1);
    else
        return(0);
}///Fin funcion1()
