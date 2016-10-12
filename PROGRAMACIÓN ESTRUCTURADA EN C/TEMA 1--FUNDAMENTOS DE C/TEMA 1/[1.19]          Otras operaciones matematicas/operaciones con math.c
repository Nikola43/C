#include <stdio.h>
#include <math.h>

main()
{
      float cantidad; /*Dinero a invertir*/
      float interes; /*Tasa de interes anual*/
      float annos; /*Numero de años*/
      float total; /*Cantidad total acumulada*/
      
      printf("Introduce la cantidad de dinero a invertir: ");
      scanf("%f",&cantidad);
      printf("Introduce la tasa de interes anual: ");
      scanf("%f",&interes);
      printf("Introduce el numero de annos: ");
      scanf("%f",&annos);
      printf("\n");
      
      interes /= 100.0;
      total = cantidad * pow((1.0 + interes),annos);
      printf("La cantidad total acumulada es %0.2f\n",total);
      system("pause");
      }
