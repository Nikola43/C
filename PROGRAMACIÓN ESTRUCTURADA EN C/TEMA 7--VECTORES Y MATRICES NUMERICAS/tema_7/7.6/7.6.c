#include <stdio.h>

void funcion(int v[]);

void main()
{
    int vector[3];

    vector[0] = 10;
    vector[1] = 20;
    vector[2] = 30;

    funcion(vector); ///funcion(&vector[0]);
}

void funcion(int v[])
{
    printf("&vector = %d\n", v[0]);
    printf("&vector = %d\n", v[1]);
    printf("&vector = %d\n", v[2]);

}

