#include <stdio.h>

void main()
{
   char *puntero; ///Puntero tipo char
   char variable; ///Variable tipo char

   variable = 1;
   puntero = &variable; ///Se le asigna al puntero la direccion de memoria de variable
   printf("Valor dentro de variable: %d\n", variable);
   printf("Valor dentro de puntero: %d\n", puntero);
   *puntero = 2;
   printf("Valor dentro de variable: %d\n", variable);
   printf("Valor dentro de puntero: %d\n", puntero);
   printf("\n");
   printf("Valor direccion de variable: %d\n", &variable);
   printf("El valor del puntero es la direccion a la que apunta\n");
   printf("la direccion de memoria de variable\n\n");
   exit(0);
}
