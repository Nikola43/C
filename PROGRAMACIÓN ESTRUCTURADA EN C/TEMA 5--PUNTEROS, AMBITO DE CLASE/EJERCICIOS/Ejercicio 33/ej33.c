#include <stdio.h>

void explicarPrograma(void);
void obtenerValores();

void main()
{
    //explicarPrograma();
    obtenerValores();
}///Fin main

void explicarPrograma(void)
{
    printf("Este programa muestra un ejemplo del uso de:\n");
    printf("COMPLEMENTO, AND, OR, XOR, <<, >>,\n\n");
}///Fin explicar programa

void obtenerValores()
{
    int num = 0b11110000;
    int num2 = 0b00001111;

    printf("%f, %f ",num, num2);
}///Fin obtenerValores
