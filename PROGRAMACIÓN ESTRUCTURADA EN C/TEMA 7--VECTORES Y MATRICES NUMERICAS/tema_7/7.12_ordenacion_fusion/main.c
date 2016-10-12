#include <stdio.h>
#define VECT_TAM 9

void ordenacion_fusion(int ent[], int i, int b, int sal[]);
void mostrar_vector(int ent[]);
void mezclar_vector(int ent1[], int ent2[], int n1, int n2, int sal);

int comparaciones = 0;

int main()
{
    int vector_ent[VECT_TAM] = {6, 1, 9, 4, 5, 8, 0, 2, 7};
    int vector_sal[VECT_TAM] = {0};

    int comparaciones;

    printf("Vector no ordenado\n");
    mostrar_vector(vector_ent);

    printf("Vector ordenado\n");
    mostrar_vector(vector_sal);

    printf("El numero de comparaciones es %d\n", comparaciones);
    return(0);
}

void mostrar_vector(int ent[])
{
    int i;
    for(i=0; i < VECT_TAM; i++)
        printf("%4d", ent[i]);
    printf("\n");
}
