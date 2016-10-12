#include <stdio.h>

int callme();

void main()
{
   int x = callme();
   printf("El valor de 'x' es: %d\n",x);
   printf("la llamada de la funcion callme() devuelve: %d\n",callme());
}

int callme()
{
    return(5);
}
