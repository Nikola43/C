#include <stdio.h>
#include <stdlib.h>

///Prototipo de funciones
void memoriaDinamica();
void memoriaDinamica2();

void main()
{
    memoriaDinamica();
    memoriaDinamica2();
}

void memoriaDinamica()
{
    ///Creamos el puntero
    int *p;
    int nada = 4;
    ///Reservamos la memoria para el puntero
    p = (int *)malloc(sizeof(int));
    ///Asignamos el valor al puntero
    (*p)=nada;

    printf("\nValor puntero *p: %d\n", *p);

    ///Despues liberamos el puntero en memoria
    free(p);

    printf("\nValor puntero *p: %d\n\n", *p);
}///Fin memoriaDinamica

void memoriaDinamica2()
{
    int *p;
    p = (int *)malloc(sizeof(int) *5 );
    (*p)=5;

    printf("\nValor puntero *p: %d\n", *p);
}///Fin memoriaDinamica2()
