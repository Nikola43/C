#include <stdio.h>

///Funcion para recoger el nombre
void funcion1(char nombre[]);

/**Programa principal*/
void main()
{
    char cadena[20]; ///Variable donde se almacenará la cadena
    funcion1(cadena); ///funcion que recoge el nombre y lo guarda en 'cadena'
    printf("Tu nombre es: %s\n",cadena);
}/**Fin main*/


void funcion1(char nombre[])
{
    printf("Cual es su nombre: ");
    gets(nombre); ///Recoge el nombre por teclado
}///Fin funcion1()
