#include <stdio.h>
/**
Programa: convertir grados fahrenhei en grados centigrados.

Desarrollo: el programa convierte una temperatura leida
en grados centigrados mostrandolos en pantalla.

Variables usadas:
          Far = Temperatura en grados fahrenheit.
          Cen = temperatura en grados centigrados.

Constantes usadas:
           ninguna.
*/

/*Inicio del programa*/

main()
{
      float temp_Far;
      float temp_Cen;

      /*Explicar el programa al usuario*/
      puts(" ");
      puts("Este programa convierte de farhenheit a");
      puts("Grados centigrados");
      puts(" ");
      puts("Introduce los grados farhenheit a coonvertir");
      puts("Y el programa hara el resto");

      /*Optiene el valor fahrenheit del user*/
      puts(" ");
      printf("Introduce la temperatura en grados farhenheit: ");
      scanf("%f", &temp_Far);

      /*Realiza los calculos*/
      temp_Cen = 5.0/9.0  *(temp_Far - 32);

      /*Mostrar los datos al usuario*/
      puts(" ");
      printf("Una temperatura de %0.1f grados farhenheit.\n", temp_Far);
      printf("Es igual a %0.1f grados centigrados.\n", temp_Cen);
      system("pause>nul");
      }


