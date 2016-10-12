#include <stdio.h>

void funcion();

int una_variable;

void main()
{
    una_variable = 5;
    printf("El valor de una_varible en main es: %d\n", una_variable);
    funcion();
}

void funcion()
{
    int una_variable = 7;
    printf("El valor de una_varible en esta funcion es: %d\n", una_variable);
}
