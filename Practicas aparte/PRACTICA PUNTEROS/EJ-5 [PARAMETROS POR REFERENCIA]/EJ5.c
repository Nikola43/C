#include <stdio.h>

///Prototipo de funciones
int suma(int *numero1, int *numero2);

void main()
{
    int num1 = 3;
    int num2 = 4;
    int total = 0;
    total = suma(&num1, &num2);
    printf("\nValor de 'total': %d\n", total);
}

int suma(int *numero1, int *numero2)
{
    int totalSuma;
    totalSuma = *numero1 + *numero2;
    return(totalSuma);
}///Fin suma(int *, int *);
