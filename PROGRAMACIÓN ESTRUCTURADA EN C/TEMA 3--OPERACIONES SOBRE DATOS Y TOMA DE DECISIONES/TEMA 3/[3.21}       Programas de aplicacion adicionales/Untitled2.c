#include <stdio.h>

void ahex(int n);

main()
{
    int numero; /**Numero leido*/

    ///Almacenamiento temporal.
    int a;
    int b;

    printf("Introduce un numero del 0 al 255: ");
    scanf("%i",&numero);

    a = numero / 16; ///Obtine el valor de los 4 bits superiores.

    a = numero % 16;  ///Obtiene el valor de los 4 bits inferiores.

    ahex(a);
    ahex(b);

}///Fin main

void ahex(int numero)
{
    if ((numero >= 0)&&(numero <= 9))
    {
     printf("%i",numero);
    }///Fin if
    else
    {
        switch(numero)
        {
            case 10 : printf("A"); break;
            case 11 : printf("B"); break;
            case 12 : printf("C"); break;
            case 13 : printf("D"); break;
            case 14 : printf("E"); break;
            case 15 : printf("F"); break;
            default : printf("Error!\n");
            break;


        }///Fin switch
    }///Fin else

}///Fin ahex.
