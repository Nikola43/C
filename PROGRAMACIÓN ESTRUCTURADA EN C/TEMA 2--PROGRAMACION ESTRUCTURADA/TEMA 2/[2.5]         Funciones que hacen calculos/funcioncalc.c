#include <stdio.h>
/*Definiendo funcion*/
float cuadrado(float numero);
/*------------------------------------------*/
/*Cuerpo del programa*/
main()
{
      /*Declarando las variables*/
      char eleccion;
      float valor;
      float respuesta;
/*----------------------------------------*/
      head:
      system("cls");
      /*ejecucion del programa*/
      printf("Escriba el numero a convertir al cuadrado: ");
      scanf("%f",&valor);
      /*La respuesta es igual a la llamada de la funcion cuadrado que hace calculos y por eso lleva en medio valor*/
      respuesta = cuadrado(valor);
      printf("El cuadrado de %0.0f es %0.0f\n", valor, respuesta);
      system("pause>nul");
/*------------------------------------------*/
      /*Volver a buscar un numero o salir*/
      printf("\n");

      printf("Desea saber el cuadrado de otro numero?(S/N): ");
      scanf("%s",&eleccion);
      if (eleccion == 's')
      {
                   goto head;
                   }
      else
      if (eleccion == 'n')
      {
      printf("El programam se cerrara.\n");
      system("pause>nul");
      }
      else
      {
          printf("Seleccione si o no\n");
          system("pause");
          }
      }//fin main

/*Definiendo que acciones hace la funcion float cuadrado*/
float cuadrado(float numero)
{
      float resultado;
      resultado = numero * numero;
      return(resultado);

      }//Fin funcion cuadrado
