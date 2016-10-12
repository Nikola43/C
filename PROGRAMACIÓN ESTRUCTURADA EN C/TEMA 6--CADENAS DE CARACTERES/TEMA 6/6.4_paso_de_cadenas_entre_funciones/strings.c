#include <stdio.h>

///Funcion a la que se manda el nombre
void funcion1(char nombre[]);

/**Programa principal*/
void main()
{
    char cadena[20]; ///Variable donde se almacena la entrada por teclado

    printf("Cual es su nombre: ");
    gets(cadena); ///Almacenamos la entrada de teclado en 'cadena'
    funcion1(cadena); ///funcion que imprime 'cadena'

}/**Fin main*/


void funcion1(char nombre[])
{
    printf("Tu nombre es: %s\n",nombre);
}///Fin funcion1()
