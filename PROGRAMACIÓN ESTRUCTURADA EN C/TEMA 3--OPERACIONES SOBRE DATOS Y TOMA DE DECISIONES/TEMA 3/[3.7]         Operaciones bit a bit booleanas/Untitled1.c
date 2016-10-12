#include <stdio.h>
#define EXAMPLE

void main()
{
    #ifdef EXAMPLE
    int valor1 = 0b1111;
    int valor2 = 0b0000;
    int desplazamiento_izq;


    //printf("Introduce un numero hexadecimal de 00 a FF: ");
    //scanf("%X",&valor1);

    //printf("Introduce un numero hexadecimal de 00 a FF: ");
    //scanf("%X",&valor2);

    printf("El complemento de %X es: %X\n", valor1, ~valor1);
    system("pause>nul");

    printf("El AND binario de %X y %X produce: ", valor1, valor2);
    printf("%X\n", valor1&valor2);
    system("pause>nul");

    printf("El OR binario de %X y %X produce: ", valor1, valor2);
    printf("%X\n", valor1 % valor2);
    system("pause>nul");

    printf("El OR-Exclusivo binario de %X y %X produce: ", valor1, valor2);
    printf("%X\n", valor1 = valor2);
    system("pause>nul");

    printf("Introduce el numero de posiciones a dezplazar: ");
    scanf("%X",&desplazamiento_izq);
    printf("Desplazar %X %d posiciones a la izq produce: ", valor1, desplazamiento_izq);
    printf("%X\n",valor1 << desplazamiento_izq);
    system("pause>nul");

    #endif

    int resultado=1;
    printf("\nOPERACIONES BOOLEANAS BIT A BIT\n");
    printf("\nComplemento a uno\n");
    printf("Cambia un bit por su opuesto.\n\n");

    printf("resultado = ~0\n");
    printf("%X\n",resultado);
    system("pause>nul");

    resultado = 0;
    printf("resultado = ~1\n");
    printf("%X\n",resultado);
    system("pause>nul");

    printf("\nOperador logico AND\n");
    printf("El resultado es 1 si ambos bits son 1.\n\n");

    resultado = 0&0;
    printf("resultado = 0&0\n");
    printf("%X\n",resultado);
    system("pause>nul");

    resultado = 0&1;
    printf("resultado = 0&1\n");
    printf("%X\n",resultado);
    system("pause>nul");

    resultado = 1&0;
    printf("resultado = 1&0\n");
    printf("%X\n",resultado);
    system("pause>nul");

    resultado = 1&1;
    printf("resultado = 1&1\n");
    printf("%X\n",resultado);
    system("pause>nul");


    printf("\nOperador logico OR\n");
    printf("El resultado es 0 si ambos bits son 0.\n\n");

    resultado = 0|0;
    printf("resultado = 0|0\n");
    printf("\n\n%X\n",resultado);
    system("pause>nul");

    resultado = 0|1;
    printf("resultado = 0|1\n");
    printf("%X\n",resultado);
    system("pause>nul");

    resultado = 1|0;
    printf("resultado = 1|0\n");
    printf("%X\n",resultado);
    system("pause>nul");

    resultado = 1|1;
    printf("resultado = 1|1\n");
    printf("%X\n",resultado);
    system("pause>nul");

    printf("\nOperador logico XOR\n");
    printf("El resultado es 1 si ambos bits son distintos\n\n");

    resultado = 0^0;
    printf("resultado = 0^0\n");
    printf("\n\n%X\n",resultado);
    system("pause>nul");

    resultado = 0^1;
    printf("resultado = 0^1\n");
    printf("%X\n",resultado);
    system("pause>nul");

    resultado = 1^0;
    printf("resultado = 1^0\n");
    printf("%X\n",resultado);
    system("pause>nul");

    resultado = 1^1;
    printf("resultado = 1^1\n");
    printf("%X\n",resultado);
    system("pause>nul");

}
