#include <stdio.h>
#include <ctype.h>

/**Programa principal*/
void main()
{
    char car;
    printf("Introduce un caracter: ");
    car = getchar();

    if(isalnum(car) != 0)
        printf("El caracter: %c SI es un caracter alfanumerico\n", car);
    else
        printf("El caracter: %c NO es un caracter alfanumerico\n", car);

    if(isalpha(car) != 0)
        printf("El caracter: %c SI es un caracter alfabetico\n", car);
    else
        printf("El caracter: %c NO es un caracter alfabetico\n", car);

    if(iscntrl(car) != 0)
        printf("El caracter: %c SI es un caracter de control\n", car);
    else
        printf("El caracter: %c NO es un caracter de control\n", car);

    if(isdigit(car) != 0)
        printf("El caracter: %c SI es un caracter digito\n", car);
    else
        printf("El caracter: %c NO es un caracter digito\n", car);

    if(isgraph(car) != 0)
        printf("El caracter: %c SI es un caracter imprimible\n", car);
    else
        printf("El caracter: %c NO es un caracter imprimible\n", car);

    if(islower(car) != 0)
        printf("El caracter: %c SI es un caracter minuscula\n", car);
    else
        printf("El caracter: %c NO es un caracter minuscula\n", car);

    if(isupper(car) != 0)
        printf("El caracter: %c SI es un caracter mayuscula\n", car);
    else
        printf("El caracter: %c NO es un caracter mayuscula\n", car);

    if(isprint(car) != 0)
        printf("El caracter: %c SI es un caracter imprimible incluyendo caracter\n", car);
    else
        printf("El caracter: %c NO es un caracter imprimible incluyendo caracter\n", car);

    if(ispunct(car) != 0)
        printf("El caracter: %c SI es un caracter de puntuacion\n", car);
    else
        printf("El caracter: %c NO es un caracter de puntuacion\n", car);

    if(isspace(car) != 0)
        printf("El caracter: %c SI es un caracter espacio\n", car);
    else
        printf("El caracter: %c NO es un caracter espacio\n", car);

    if(isxdigit(car) != 0)
        printf("El caracter: %c SI es un caracter digito hexadecimal\n", car);
    else
        printf("El caracter: %c NO es un caracter digito hexadecimal\n", car);

    exit(0);
}/**Fin main*/

