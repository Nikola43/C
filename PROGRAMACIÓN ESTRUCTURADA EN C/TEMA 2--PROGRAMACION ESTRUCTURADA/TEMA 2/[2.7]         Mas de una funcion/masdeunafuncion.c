#include <stdio.h> 

/*Prototipo de la funcion*/

float reactancia_capacitiva(float capacidad, float frecuencia);
/*Esta funcion calcula la reactancia capacitativa para un valor de condensador y una frecuencia*/
float reactancia_inductiva(float inductancia, float frecuencia);
main()
{
      float henrios;
      float faradios;
      float hertzios; 
      float reactancia;
      
      printf("Introduce el valor del condensador en faradios: ");
      scanf("%f", &faradios);
      printf("Introduce el valor de la frecuencia en hertzios: ");
      scanf("%f", &hertzios);
       printf("Introduce el valor de la inductancia en henrios: ");
      scanf("%f", &henrios);
      
      reactancia = reactancia_capacitiva(faradios, hertzios);
      
      printf("la reactancia de un condensador de %f faradios\n", faradios);
      printf("a la frecuencia de %f hertzios es %f ohmios\n", hertzios, reactancia);
      system("pause>nul");
      
      printf("\n");
      
      reactancia = reactancia_inductiva(henrios, hertzios);
      printf("La reactancia de una inductancia de %f henrios.\n",henrios);
      printf("\n");
      printf("a una frecuencia de %f hertzios es %f ohmios.\n",hertzios, reactancia);
      system("pause");
      exit(0);
      }
      
      float reactancia_capacitiva(float capacidad, float frecuencia)
      {
            float reactancia;
            float pi = 3.14159;
            
            reactancia = 1/(2 * pi * frecuencia * capacidad);
            return(reactancia);
            }
            
      float reactancia_inductiva(float inductancia, float frecuencia)
      {
            float reactancia;
            float pi = 3.14159;
            
            reactancia = 2 * pi * frecuencia * inductancia;
            return(reactancia);
            }
