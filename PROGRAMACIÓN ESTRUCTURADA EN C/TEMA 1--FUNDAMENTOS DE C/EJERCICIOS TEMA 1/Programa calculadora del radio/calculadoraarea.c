#include <stdio.h>
#include <math.h>
/*Definiendo las variables*/
float radio;
float area;
float numero_pi = 3.14;
/*Programa principal*/
main()
{
      printf("Este programa calcula el area de un circulo introduciendo el tamaño del radio\n");
      printf("\n");
      printf("Introduce el tamaño del radio en centimetros\n");
      scanf("%f",&radio);
      
      area = radio * radio * numero_pi;
      
      printf("El area del circulo es de %0.0f centimetros\n",area);
      system("pause");
      }/*Fin main*/
