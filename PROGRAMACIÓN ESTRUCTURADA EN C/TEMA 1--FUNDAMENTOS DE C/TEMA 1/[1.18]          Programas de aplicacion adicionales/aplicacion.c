#include <stdio.h>
/*empieza el problema*/
main()
{
      float R1; /*Declara el variable de R1*/
      float R2; /*Declara la variable de R2*/
      float REQ; /*Resistencia equivalente*/
      
      printf("Introduce el valor de la resistencia 1: ");
      scanf("%f",&R1);
      printf("Introduce el valor de la resistencia 2: ");
      scanf("%f",&R2);
      printf("\n");
      REQ = (R1 * R2) / (R1 + R2);
      printf("La resistencia equivalente es %0.2f\n",REQ);
      system("pause>nul");
      }      
