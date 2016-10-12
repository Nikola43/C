#include <stdio.h>

    //Definimos una 'enum' de colores
    enum colorCode {negro, marron, rojo, naranja, amarillo};

int main()
{
    //Creamos una variable 'color' tipo 'enum'
    enum colorCode color;
    char valor;

    //Entrada por teclado
    printf("Introduzca un entero entre 0 y 4: ");
    valor = getchar();

    //Asignamos el color a la variable con el mismo nombre
    switch (valor)
    {
        case '0': color = negro; break;
        case '1': color = marron; break;
        case '2': color = rojo; break;
        case '3': color = naranja; break;
        case '4': color = amarillo; break;
        default:  printf("Opcion no valida\n"); break;
    }

    //Imprimimos color dependiendo de la eleccion del usuario
    switch (color)
    {
        case negro:    printf("negro\n"); break;
        case marron:   printf("marron\n"); break;
        case rojo:     printf("rojo\n"); break;
        case naranja:  printf("naranja\n"); break;
        case amarillo: printf("amarillo\n"); break;
        default:       printf("Opcion no valida\n"); break;
    }
}
