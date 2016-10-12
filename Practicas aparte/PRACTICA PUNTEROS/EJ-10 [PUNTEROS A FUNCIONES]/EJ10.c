#include <stdio.h>
#include <stdlib.h>

///Prototipo de funciones
void puntero_A_puntero();

void main()
{
    puntero_A_puntero();
}

void puntero_A_puntero()
{
    int **puntero_a_puntero;

    int b = 5;
    int *puntero;

    puntero = &b;
    puntero_a_puntero = &puntero;

    printf("\nValor de 'b': %i\n", b);
    printf("\nDireccion de 'b': %X\n\n", &b);

    printf("\nValor al que apunta 'puntero': %i\n", *puntero);
    printf("\nValor de 'puntero': %i\n", puntero);
    printf("\nDireccion de 'puntero': %X\n\n", &puntero);

    printf("\nValor al que apunta'puntero_a_puntero': %i\n", **puntero_a_puntero);
    printf("\nValor de 'puntero_a_puntero': %X\n", puntero_a_puntero);
    printf("\nDireccion de 'puntero_a_puntero': %X\n", &puntero_a_puntero);



}///Fin memoriaDinamica
