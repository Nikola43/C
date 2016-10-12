#include <stdio.h>
void main()
{
    int vec[7];
    int indice;
    int i;

    vec[0] = 0;
    vec[1] = 2;
    vec[2] = 4;
    vec[3] = 8;
    vec[4] = 16;
    vec[5] = 32;
    vec[6] = 64;

    for(indice = 1; indice <= 5; indice++)
    {
        printf("vec[%d] = %d\n\n", indice, vec[indice]);

        printf("\tvec[%d + 1] = %d\n\n ", indice, vec[indice + 1]);

        printf("\t\tvec[%d - 1] = %d\n\n", indice, vec[indice - 1]);
    }

    return(0);
}

void funcion(int v[])
{
    v[0] = 10;
    v[1] = 20;
    v[2] = 30;
}
