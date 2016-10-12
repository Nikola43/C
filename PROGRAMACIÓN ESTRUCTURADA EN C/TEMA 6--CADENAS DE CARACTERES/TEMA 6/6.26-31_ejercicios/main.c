#include <stdio.h>
#include <string.h>
#include <math.h>

#define TAM 27

void ej26();
void ej27();
void ej28();
void ej29();
void ej30();
void ej31();

void xyz(char abc[]);

int main()
{
    ej30();
    return(0);
}

void ej26()
{
    char str[TAM];
    int i;

    printf("%s\n", str);

    for(i=0; i<TAM; i++)
        str[i] = i + 65;

    printf("%s\n", str);
}

void ej27()
{
    char *str;
    xyz(str);
    printf("%s", str);
}

void xyz(char abc[])
{

    char def[30] = "Esto funciona?\n";
    abc = def;
}

void ej28()
{
    char abc[] = "es imprimible";
    int i;

    abc[7] = abc[strlen(abc)];
    printf("%s\n", abc);
}

void ej29()
{
    char sa[80] = "la cara oculta de ";
    char sb[80] = "la medianoche.";
    char sc[80] = "luna";

    strncat(sa, sb, 3);
    strcat(sa, sc);
    printf("%s\n", sa);
}

void ej30()
{
    char str1[] = "cpu";
    char str2[] = "CPU";

    printf("%d\n", strcmp(str1, str2));
}

void ej31()
{
    char str[] = "el pueblo es way para programar todo el puto dia";

    printf("%s\n", strchr(str, 't'));
    printf("%s\n", strchr(str, 't'));
}
