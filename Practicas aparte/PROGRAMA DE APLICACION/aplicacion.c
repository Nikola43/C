/**
Nombre del programa:      Aplicarformula

    */

///Incluimos librerías
#include <stdio.h>
#include <math.h>


void main()
{
    int position = 0;
    int *temp;
    temp = &position;

    for((*temp=0); (*temp<4096); (*temp++))
    {
        printf("%X\t", temp); printf("%i\n", *temp);
        system("pause>nul");
    }

}///Fin main

