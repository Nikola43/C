#include <stdio.h>
#include "head.h"

main()
{
    float total;
    float total2;

    total2 = cubo(5);
    total = cuadrado(5);
    printf("el cuadrado de 5 es: %f \n",total);
    printf("el cubo de 5 es %f\n",total2);
    system("pause>nul");
    return(0);
}
