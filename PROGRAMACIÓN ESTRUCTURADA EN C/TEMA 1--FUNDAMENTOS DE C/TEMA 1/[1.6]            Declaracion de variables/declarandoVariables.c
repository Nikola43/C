#include <stdio.h> /**Se incluye un archivo de las librerias */

/**Aqui comienza la funcion principal, lo que viene siendo el programa en si*/
main()
{
char un_caracter; /*Esto declara la variable un_caracter*/
int un_entero; /*Esto declara la variable un_entero*/
float un_real; /*Esto declara la variable un_real*/

un_caracter = 'a'; /*Le asignamos un valor a la variable un_caracter*/
un_entero = 15;    /*Le asignamos un valor a la variable un_entero*/
un_real = 27.62;   /*Le asignamos un valor a la variable un_real*/
printf("%c es un caracter.\n",un_caracter); /*Imprime con la funcion printf el contenido de un_caracter*/
printf("%d es un entero.\n",un_entero);   /*Imprime con la funcion printf el contenido de un_entero*/
printf("%f es un real.\n",un_real);     /*Imprime con la funcion printf el contenido de un_real*/

system("Pause>nul");  /*Hace una pausa en el sistema*/

}
/**Fin de la funcion principal*/
