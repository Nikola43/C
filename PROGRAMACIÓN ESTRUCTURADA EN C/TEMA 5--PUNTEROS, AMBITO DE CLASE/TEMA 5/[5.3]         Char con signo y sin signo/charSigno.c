#include <stdio.h>

/**Programa principal*/
void main()
{
    char val = 0;
    while(val < 255)
    {
        val++;
        printf("Valor de val con signo: %d\n",val);
        printf("Valor de val sin signo: %u\n\n",val);
        sleep(1);
    }


}/*Fin main*/
