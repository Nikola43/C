///Incluimos librerias
#include <stdio.h>

///Funcion principal
void main()
{
    int valor1 = 1111;
    int valor2 = 1100;
    int desplazamiento_izq;


    printf("El complemento de %X es: %i\n", valor1, ~valor1);
    system("pause>nul");


    printf("El AND binario de %X y %X produce: ", valor1, valor2);
    printf("%X\n", valor1&valor2);
    system("pause>nul");

    printf("El OR binario de %X y %X produce: ", valor1, valor2);
    printf("%X\n", valor1 % valor2);
    system("pause>nul");

    printf("El OR-Exclusivo binario de %X y %X produce: ", valor1, valor2);
    printf("%i\n", valor1 = valor2);
    system("pause>nul");

    printf("Desplazar %X %X posiciones a la izq produce: ", valor1, desplazamiento_izq);
    printf("%i\n",valor1 << desplazamiento_izq);
    system("pause>nul");
}///Fin main
