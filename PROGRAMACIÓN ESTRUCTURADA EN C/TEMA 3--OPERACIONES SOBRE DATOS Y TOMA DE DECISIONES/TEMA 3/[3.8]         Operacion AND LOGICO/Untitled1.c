#include <stdio.h>

void main()
{
    int resultado;

    printf("\nOperador logico AND\n");
    printf("Solo es verdadero si ambas condiciones son verdaderos.\n\n");

    resultado = 0&&0;
    printf("resultado = 0&&0\n");
    printf("%X\n",resultado);
    system("pause>nul");

    resultado = 0&&1;
    printf("resultado = 0&&1\n");
    printf("%X\n",resultado);
    system("pause>nul");

    resultado = 1&&0;
    printf("resultado = 1&&0\n");
    printf("%X\n",resultado);
    system("pause>nul");

    resultado = 1&&1;
    printf("resultado = 1&&1\n");
    printf("%X\n",resultado);
    system("pause>nul");


    printf("\nOperador logico OR\n");
    printf("Solo es falso si ambas condiciones son falsas, cualquier otra cosa da un valor verdadero.\n\n");

    resultado = 0||0;
    printf("resultado = 0||0\n");
    printf("\n\n%X\n",resultado);
    system("pause>nul");

    resultado = 0||1;
    printf("resultado = 0||1\n");
    printf("%X\n",resultado);
    system("pause>nul");

    resultado = 1||0;
    printf("resultado = 1||0\n");
    printf("%X\n",resultado);
    system("pause>nul");

    resultado = 1||1;
    printf("resultado = 1||1\n");
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

}///Fin main
