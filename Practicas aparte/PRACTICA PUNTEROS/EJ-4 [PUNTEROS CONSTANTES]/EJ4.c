#include <stdio.h>

///Prototipo de funciones
void punteroMemoriaConstante(void);
void punteroValorConstante(void);
//void ejemplo2(void);

void main()
{
    punteroValorConstante();
    punteroMemoriaConstante();
}

void punteroValorConstante(void)
{
    printf("\nEjemplo de puntero con valor constante\n\n");
    ///Puntero constante vacio
    const int *puntero=NULL;

    ///Variables a las que se apunta
    int a = 4;
    int b = 7;

    ///Puntero constante, puede cambiar la direccion a la que apunta, pero no el valor
    puntero = &a;
    printf("apunta a 'a' : %i\n",*puntero);

    puntero = &b;
    printf("\napunta a 'b' : %i\n",*puntero);

    printf("\nSolo puede cambiarse hacia donde apunta el puntero\n\n\n");

    /**
    *puntero = 7; da error, dado que solo es de lectura
    *puntero = *puntero + b; da error, dado que no se puede escribir en el*/

}///Fin punteroConstante();

void punteroMemoriaConstante(void)
{
    int a = 4;
    int b = 7;

    int *const puntero = &a;

    printf("\nPuntero de memoria constante\n\n");
    printf("apunta a 'a' : %i\n\n",*puntero);

    *puntero += 3;
    printf("*puntero += 3 : %i\n\n",*puntero);

    *puntero = *puntero + *puntero - 1;
    printf("*puntero += 3 : %i\n\n",*puntero);

    printf("\nPuede cambiar el valor pero no la memoria a la que apunta\n");

    /**
    puntero = &a; da error, dado que solo es de lectura
    puntero = &c; da error, dado que no se puede escribir en el*/
}
