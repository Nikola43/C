#include <stdio.h>

extern int valor_extern = 8;

///Variables automaticas
void funcion()
{
    static int val;
    val = 7;
    printf("El valor de 'val': %d\n", val);
}

