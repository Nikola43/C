#include <stdio.h>
#include <stdlib.h>

///Prototipo de funciones
int punteroMatriz();

void main()
{
    punteroMatriz();
}

int punteroMatriz()
{
    int matriz[4] = {2, 4, 6, 8};
    int *p;

    p = &matriz[0];

    int i = 0;
    for (i = 0; i < 4; i++)
    {
        printf("Valor matriz[%d]: %d \n", i, *p+i );
    }
}///Fin memoriaDinamica
