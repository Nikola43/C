#include <stdio.h>

///Prototipo de funciones
void ejemplo1(void);
void ejemplo2(void);

void main()
{
  ejemplo1();
  ejemplo2();
}

///Puntero y variable siempre deben ser del mismo tipo
void ejemplo1(void)
{
    unsigned char a=255; /** 255 en binario es 11111111 (8 bits) */
    char *pa; /** p es un puntero a un signed char (por defecto) */
    pa = &a;  /** almacenamos en 'pa' la dir de memoria de la variable 'a' */
    printf("\nchar a: %i\n", *pa); /** ¡muestra el valor –1, en vez de 255! */

    unsigned char b=255; /** 255 en binario es 11111111 (8 bits) */
    unsigned char *pb;   /** p es un puntero a un unsigned char (por defecto) */
    pb = &a; /** almacenamos en 'pa' la direccion de memoria de la variable 'a' */
    printf("unsigned char a: %i\n\n", *pb); /** ¡muestra el valor 255 al ser del mismo tipo! */
}

///Puntero y variable siempre deben ser del mismo tipo
void ejemplo2(void)
{
    unsigned int a=269, b; /** 269 en binario: 100001101 (9 bits) */
    unsigned char *p; /** p: puntero a unsigned char (8 bits) */
    p = &a; /** p supone que a es unsigned char􀃆solo coge 8 bits */
    b = *p; /** asigno a b el valor que hay en la dir apuntada por p */
    printf("unsigned int b = %i", b); /** ¡muestra el valor 13, en vez de 269! */
/** coge solo los 8 1º bits (00001101), cuyo valor es es 13 */
}
