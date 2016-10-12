#include <stdio.h>

#define MAX 9

int ordenar_burbuja(int v[]);
int imprimir_vector(int v[]);

void main()
{
    int numeros[MAX];
    int i, comparaciones;

    for(i=0;i<MAX;i++)
    {
        printf("Numero[%d] = ", i);
        scanf("%d", &numeros[i]);
    }
    comparaciones = ordenar_burbuja(numeros);
    imprimir_vector(numeros);

    printf("\nSe han realizado %d comparaciones\n", comparaciones);
}

int ordenar_burbuja(int v[])
{
    int i;
    int seguir;
    int temp;
    int comp = 0;

    do
    {
        seguir = 0;
        for(i = 0; i < MAX; i++)
        {
            comp++;
            if(v[i] > v[i+1] && (i != MAX - 1))
            {
                temp = v[i];
                v[i] = v[i + 1];
                v[i + 1] = temp;
                seguir = 1;
            }
        }
    }while(seguir);
    return(comp);
}

int imprimir_vector(int v[])
{
    int i;
    printf("\n\nValores ordenados\n");
    for(i=0;i<MAX;i++)
        printf("Numero[%d] = %d\n", i, v[i]);
}
