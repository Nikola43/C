#include <stdio.h>
#include <ctype.h>

/**Programa principal*/
void main()
{
    char cadena[10]; ///string de 10 caracteres
    int i = 0; ///Variable contador para recorrer la string
    int signo = 1; ///Variable donde se guarda el signo del numero
    int numero = 0; ///Variable donde se guardara el numero

    printf("Introduce un numero: \n");
    printf("--->: ");
    gets(cadena); ///escaneamos la cadena por teclado
    if('-' == cadena[0]) ///El primer elemento es el signo, si es negativo
    {                    ///se le asigna -1 al signo,
        signo = -1;
        i++;             ///Se incrementa el contador en uno para recorrer la cadena apartir del signo
    }
    if('+' == cadena[0]) ///Si el signo es positivo, solo se incrementa el contador
        i++;
    while(cadena[i] != '\0')
    {
        numero *= 10;
        numero += cadena[i] - 0x30;
        i++;
    }
    numero *= signo;
    printf("La cadena %s se convierte a int: %d\n", cadena, numero );
}/**Fin main*/

