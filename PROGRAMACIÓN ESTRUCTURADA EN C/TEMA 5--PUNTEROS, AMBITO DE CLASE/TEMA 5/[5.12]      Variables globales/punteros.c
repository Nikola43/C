#include <stdio.h>

void funcion();

int contador;

void main()
{
    contador = 0;
    while(contador < 5)
    {
        printf("El valor de 'contador': %d\n", contador);
        contador++;
    }///Fin while
    funcion();

}

void funcion()
{
    while(contador < 6)
    {
        printf("El valor de 'contador' en esta funcion es: %d\n", contador);
        contador++;
    }///Fin while
}
