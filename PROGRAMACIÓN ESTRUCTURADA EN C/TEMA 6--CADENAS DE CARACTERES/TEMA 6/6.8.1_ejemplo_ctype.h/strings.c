#include <stdio.h>
#include <ctype.h>

/**Programa principal*/
void main()
{
    char car;
    printf("Introduce un caracter: ");
    //while((car = getchar()) != '\n');
        car = getchar();
        printf("%d\n", isalpha(car));

    exit(0);
}/**Fin main*/

