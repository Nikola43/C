#include <stdio.h>
#include <stdlib.h>
#define TAM 8

//Creamos una estructura y creamos un miembro matriz
struct
{
    char ape1[20];
    int  matrix[TAM][TAM];
} struct1;

int main()
{
    int x,y;

    for(x = 0; x < 8; x++)
    {
        for(y = 0; y < TAM; y++)
            struct1.matrix[x][y] = 1;
    }

    for(x = 0; x < 8; x++)
    {
        for(y = 0; y < TAM; y++)
            printf("%d ", struct1.matrix[x][y]);
        printf("\n");
    }

    return(0);
}
