#include <stdio.h>
#define VECT_TAM 9

int ordenacion_cubeta(int ent[], int k, int sal[]);

int main()
{
    int vector_ent[VECT_TAM] = {6, 1, 9, 4, 5, 8, 0, 2, 7};
    int vector_sal[VECT_TAM];
    int n = 9;

    int i, comparaciones;

    printf("Vector no ordenado\n");
    for(i=0; i < n; i++)
        printf("%4d", vector_ent[i]);

    printf("\n");

    comparaciones = ordenacion_cubeta(vector_ent, n, vector_sal);

    printf("Vector ordenado\n");
    for(i=0; i <= VECT_TAM; i++)
        if(vector_sal[i] != 0)
            printf("%4d", i);

    printf("\n");
    printf("El numero de comparaciones es %d\n", comparaciones);
    return(0);
}

int ordenacion_cubeta(int ent[], int k, int sal[])
{
    int j;

    for(j=0; j<VECT_TAM; j++)
        sal[j] = 0;

    for(j=0; j < k; j++)
        sal[ent[j]] = 1;
    return(k);
}
