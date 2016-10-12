#include <stdio.h>
#include <stdlib.h>
#define TAM 8

typedef struct
{
    char ape1[20];
    int  matrix[TAM][TAM];
} struct1;

//matriz de estructuras
typedef struct1 matrix_compleja[TAM][TAM];

int main()
{
    int x,y;

    for(x=0; x<TAM; x++)
    {
        for(y=0; y<TAM; y++)
            printf("%d\n", matrix_compleja[x][y]);
        printf("\n");
    }
    return(0);
}
