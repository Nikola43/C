///Incluimos librerias
#include <stdio.h>


///Funcion principal
int main()
{

    system("cls");

    unsigned int a = 0b11110000;
    a |= 0b0000001;

    char buffer[33];

    if(a==0)
    {
        putchar('0');
    }

    char *cp = buffer + 32;
    *cp = 0;
    while(a)
    {
        --cp;
        if(a & 1) *cp = '1';
        else *cp = '0';
        a >>= 1;
    }

    printf("binario: ");
    printf(cp);
    system("pause>nul");

    return (0);
}///Fin main

