#include <stdio.h>
#include <math.h>

main()
{
      float ladoa, ladob, ladoc;
      
      printf("Introduce el lado A: ");
      scanf("%f", &ladoa);
      printf("Introduce el lado B: ");
      scanf("%f",&ladob);
      
      ladoc = sqrt(ladoa * ladoa + ladob * ladob);
      printf("\nLa longitud de la hipotenusa es %5.1f\n",ladoc);
      system("pause>nul");
      }
