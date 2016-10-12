#include <stdio.h>

//Definimos un tipo de variable con typedef
typedef enum estado_luces {Rojo, Verde, Off}; //Definimos una 'enum' 'estado_luces'

void comprobacion();
void comprobar_luz(enum estado_luces condicion);   //Toma como parametro una variable 'enum'

int main()
{
    comprobacion();
    return(0);
}

void comprobacion()
{
    char entrada;
    enum estado_luces lectura; //creamos una variable tipo 'estado_luces'

    printf("\nSeleccione\n1.Rojo \n2.Verde \n3.OFF\n");
    entrada = getchar();

    //Asignamos valor a la variable 'lectura'
    switch (entrada)
    {
        case '1': lectura = Rojo; break;
        case '2': lectura = Verde; break;
        case '3': lectura = Off; break;
        default:  printf("Opcion no valida!\n"); break;
    }

    //Comprobamos lo leido
    comprobar_luz(lectura);
}

void comprobar_luz(enum estado_luces condicion)
{   
    //Imprimimos por pantalla 
    switch (condicion)
    {
        case Rojo:  printf("Comprobar temperatura del sistema\n"); break;
        case Verde: printf("Sistema correcto\n"); break;
        case Off:   printf("Comprobar fusible del sistema\n"); break;
        default:    printf("Opcion no valida!\n"); break;
    }
}
