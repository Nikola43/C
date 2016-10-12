#include <stdio.h>

main()
{
float valor;
printf("introduce un numero del 1 al 10: ");
scanf("%f",&valor);
if (valor > 5)
    printf("El numero es mayor que 5\n");
printf("el numero es %f\n",valor);
}
