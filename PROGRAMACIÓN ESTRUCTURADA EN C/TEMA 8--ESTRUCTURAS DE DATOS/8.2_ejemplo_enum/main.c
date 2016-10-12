#include <stdio.h>

    //Creamos una 'enum' de colores
    enum colorCode {negro, marron, rojo, naranja, amarillo, violeta};

int main()
{
    //Creamos una variable 'color' tipo 'enum'
    enum colorCode color;

    //recorremos la array de memoria desde el inicio
    for(color = negro; color <= violeta; color++)
        printf("%d\n", color); //Imprimimos la posision que ocupa el elemento
    return 0;
}
