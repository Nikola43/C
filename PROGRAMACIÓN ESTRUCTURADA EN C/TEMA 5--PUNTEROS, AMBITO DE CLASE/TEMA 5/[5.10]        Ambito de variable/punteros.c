#include <stdio.h>

int callme(int *p);

void main()
{
   int x = 0; ///Variable tipo char
   printf("El valor de 'x' es: %d\n",x);
   callme(&x);
   printf("El valor de 'x' es: %d\n",x);
}

int callme(int *p)
{
    *p = 9;
}
