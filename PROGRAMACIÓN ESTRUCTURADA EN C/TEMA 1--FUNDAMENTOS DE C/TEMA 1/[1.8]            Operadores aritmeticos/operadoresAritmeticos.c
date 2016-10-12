#include <stdio.h>
main()
{
      float numero_1 = 15.0;  /*Definimos la primera variable (1º Primer operando para las operaciones)*/
      float numero_2 = 3.0; /*Definimos la segunda variable (2º Primer operando para las operaciones)*/

      float respuesta_suma; /*Definimos una variable con el resultado de la suma*/
      float respuesta_resta; /*Definimos una variable con el resultado de la resta*/
      float respuesta_multi; /*Definimos una variable con el resultado de la multiplicacion*/
      float respuesta_division; /*Definimos una variable con el resultado de la division*/

      /**Realizamos las operaciones aritmeticas*/
      respuesta_suma = numero_1 + numero_2;
      respuesta_resta = numero_1 - numero_2;
      respuesta_multi = numero_1 * numero_2;
      respuesta_division = numero_1 / numero_2;

      printf("15 + 3 = %10.2f\n",respuesta_suma);
      printf("15 - 3 = %10.2f\n",respuesta_resta);
      printf("15 * 3 = %10.2f\n",respuesta_multi);
      printf("15 / 3 = %10.2f\n",respuesta_division);

      system("pause>nul");
}
