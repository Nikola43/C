#include <stdio.h>1
/* Ley de ohmm*/
main()
{
      float voltaje; /* valor del voltaje*/
      float intensidad; /* Valor de la intensidad*/
      float resistencia; /*Valor de la resistnecia*/
      
      printf("Introduce la intensidad en amperios: ");
      scanf("%f", &intensidad);
      printf("Introduce la resistencia en ohmios: ");
      scanf("%f", &resistencia);
      
      voltaje = intensidad * resistencia; /*Calcula el voltaje*/
      printf("El valor del voltaje es %0.0f voltios", voltaje);
      system("Pause>nul");
}
