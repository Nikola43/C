#include <stdio.h>

int callme(int *p);

void main()
{
   int y = 0;
   printf("El valor de 'y' es: %d\n",y);
   callme(&y);
   printf("El valor de 'y' es: %d\n",y);
}

int callme(int *p)
{
    *p = 5;
}
