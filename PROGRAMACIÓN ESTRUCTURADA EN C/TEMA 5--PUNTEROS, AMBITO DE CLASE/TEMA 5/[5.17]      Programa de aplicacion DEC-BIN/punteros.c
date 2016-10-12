///Variables static
#include <stdio.h>

void abin(char *valor);

void main()
{
    unsigned char numero; ///Numero

    printf("Introduce un numero del 0 al 255: ");
    scanf("%d", &numero);
    printf("El numero %d en binario es: ",numero);
    abin(&numero);
}///Fin main


void abin(char *valor)
{
    unsigned char posicion = 0x80;
    char temp;

    while(posicion != 0)
    {
        temp = *valor & posicion;
        (temp == 0)? printf("0") : printf("1");
        posicion = posicion >> 1;
    }///Fin while
}///Fin abin()
