#include <stdio.h>

void funcion(int v[]);

void main()
{
    int vector[3];

    funcion(vector); ///funcion(&vector[0]);

    printf("&vector = %d\n", vector[0]);
    printf("&vector = %d\n", vector[1]);
    printf("&vector = %d\n", vector[2]);
}

void funcion(int v[])
{
    v[0] = 10;
    v[1] = 20;
    v[2] = 30;
}

