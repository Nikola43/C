#include <stdio.h>
#include "definiciones.c"

void segunda_funcion(void);

void main()
{
    segunda_funcion();
    segunda_funcion();
    segunda_funcion();
    printf("Variable externa: %d",valor_extern);
}

void segunda_funcion(void)
{
    static int num = 0;
    num++;
    printf("Se ha llamado: %d veces esta funcion\n",num);
}

