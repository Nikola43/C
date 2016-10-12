#include <stdio.h>

/*Prototipos de la funcion*/

float reactancia_capacitiva(float capacidad, float frecuencia);  /*Esta funcion calcula la reactancia capacitativa*/

float reactancia_inductiva(float inductancia, float frecuencia); /*Esta funcion calcula la reactancia inductiva*/

float impedencia_en_serie(float capacidad, float inductancia, float frecuencia);  /*Esta funcion calcula la impedencia en 
                                                                                  serie usando las otras dos funciones*/
/*****************************************************************/

/*Funcion principal*/
main()
{
      float henrios;
      float faradios;
      float hertzios; 
      float impedencia;
      
      printf("Introduce el valor del condensador en faradios: ");
      scanf("%f", &faradios);
      printf("Introduce el valor de la frecuencia en hertzios: ");
      scanf("%f", &hertzios);
       printf("Introduce el valor de la inductancia en henrios: ");
      scanf("%f", &henrios);
      
      impedencia = impedencia_en_serie(faradios, henrios, hertzios);
      
      printf("la impednacia del circuito es %f ohmios\n", impedencia);
      system("pause>nul");
      exit(0);
      
      printf("\n");
      } /*Fin main*/
/*******************************************************************************************/

/*******************************************************************************************/
      /*Definiendo las funciones antes mencionadas*/
     
      float reactancia_capacitiva(float capacidad, float frecuencia)
      {
            float reactancia;
            float pi = 3.14159;
            
            reactancia = 1/(2 * pi * frecuencia * capacidad);
            return(reactancia);
            }/*Fin funcion reactancia capacitiva*/
            
      float reactancia_inductiva(float inductancia, float frecuencia)
      {
            float reactancia;
            float pi = 3.14159;
            
            reactancia = 2 * pi * frecuencia * inductancia;
            return(reactancia);
            }/*Fin funcion reactancia inductiva*/
            
      float impedencia_en_serie(float capacidad, float inductancia, float frecuencia)
      {
            float react_cap; /*Resultado reactancia capacitiva*/
            float react_ind; /*Resultado reactancia inductiva*/
            float impedencia; /*Resultado impedencia total*/
            
            react_cap = reactancia_capacitiva(capacidad, frecuencia);
            react_ind = reactancia_inductiva(inductancia, frecuencia);
            
            printf("Reactancia capacitiva = %f ohmios\n",react_cap);
            printf("Reactancia inductiva = %f ohmios\n",react_ind);
            
            impedencia = react_ind - react_cap;
            return(impedencia);
            }/*Fin funcion impedencia en serie*/
/*************************************************************************/
