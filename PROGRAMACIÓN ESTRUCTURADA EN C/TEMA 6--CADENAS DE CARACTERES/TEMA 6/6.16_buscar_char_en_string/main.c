#include <stdio.h>
#include <string.h>
#include <ctype.h>

void char_search(char str1[], char character);

int main()
{
    char str[30] = "abcdefghijklmnopqrstuvwyz";

    char_search(str, 'h');

    return(0);
}

void char_search(char str1[], char character)
{
    int pos;

    pos = strchr(str1, character);

    if(pos == 0)
        printf("la letra %c no existe\n", character);
    else
        printf("la letra %c esta almacenada en la direccion de memoria %X\n", character, &character);
}


