#include <stdio.h>
/* Declarando prototipo funciones*/
float vol_calc(float amperios, float resistencia);  /*Prototipo de funcion para el voltaje  */
float int_calc(float voltios, float resistencia); /*Prototipo de funcion para la intensidad*/
float res_calc(float amperios, float voltaje);    /*Prototipo de funcion para la resistencia*/

main()
{
      float voltaje; /* valor del voltaje*/
      float intensidad; /* Valor de la intensidad*/
      float resistencia; /*Valor de la resistnecia*/
      float eleccion;
/*-----------------------------------------------------------*/ 
      cabeza:
      system("cls");
      printf("Este programa es una calculadora de la ley de ohm.\n");
      printf("\n");
      printf("1.Voltaje.\n");
      printf("2.Intensidad.\n");
      printf("3.Resistencia.\n");
      printf("Seleccione que desea calcular: ");
      scanf("%f",&eleccion);
      printf("\n");
                            if (eleccion == 1)
                            {
                            system("cls");
                            printf("Ha elegido calcular el voltage\n");
                            printf("\n");
                            printf("Introduce la intensidad en amperios: ");
                            scanf("%f", &intensidad);
                            printf("Introduce la resistencia en ohmios: ");
                            scanf("%f", &resistencia);
                            
                            voltaje = vol_calc(intensidad, resistencia); /*Calcula el voltaje*/
                            printf("El valor del voltaje es %0.0f voltios", voltaje);
                            system("Pause>nul");
                            }
                            else
                            if (eleccion == 2)
                            {
                            system("cls");
                            printf("Ha elegido calcular la intensidad\n");
                            printf("\n");
                            printf("Introduce el voltaje en voltios: ");
                            scanf("%f", &voltaje);
                            printf("Introduce la resistencia en ohmios: ");
                            scanf("%f", &resistencia);
                            
                            intensidad = int_calc(voltaje, resistencia);
                            printf("El valor del la intensidad es %0.5f amperios", intensidad);
                            system("Pause>nul");
                            }
                            else
                            if (eleccion == 3)
                            {
                            system("cls");
                            printf("Ha elegido calcular la resistencia\n");
                            printf("\n");
                            printf("Introduce el amperaje en amperios: ");
                            scanf("%f", &intensidad);
                            printf("Introduce el voltaje en voltios: ");
                            scanf("%f", &voltaje);
                            
                            resistencia = res_calc(intensidad, voltaje);
                            printf("El valor del la resistencia es %0.0f ohms", resistencia);
                            }
                            else
                            {
                                system("cls");
                                printf("Selecciona una de las opciones validas\n");
                                system("pause>nul");
                                goto cabeza;
                                }
                            system("Pause>nul");
                                                  
                            }
/*Definiendo los prototipos de las funciones*/

float vol_calc(float amperios, float resistencia)
{
      float voltaje;
      voltaje = amperios * resistencia; /*Calcula el voltaje*/       
       return(voltaje);                     
                           
      }/*Fin funcion vol_calc*/

float int_calc(float voltios, float resistencia)
{
      float intensidad;
      intensidad = voltios / resistencia; /*Calcula la intensidad*/
      return(intensidad);
      }/*Fin funcion int_calc*/      

float res_calc(float amperios, float voltaje)
{
      float resistencia;
      resistencia = amperios * voltaje; /*Calcula la intensidad*/
      return(resistencia);
      }/*fin funcion res_calc*/     
      
      


