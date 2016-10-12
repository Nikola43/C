#include <stdio.h>

///Prototipo de funciones
int punteroVoid();

void main()
{
    punteroVoid();
}

int punteroVoid()
{
    void *p;
    int a = 5;
    int b;

    p = &a;

    ///Asignamos el puntero a b
    b = (* (int *)p );

    printf("Valor de b %i\n",b);

    printf("Direccion de b %X\n",&b);

    printf("Valor de a %i\n",a);

    printf("Direccion de a %X\n",&a);

    b += 6;
    printf("Valor de b %i\n",b);

    a += 2;
    printf("Valor de a %i\n",a);




}///Fin punteroVoid
