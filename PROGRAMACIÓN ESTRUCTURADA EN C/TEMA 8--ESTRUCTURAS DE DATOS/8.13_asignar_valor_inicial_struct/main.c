#include <stdio.h>
#include <stdlib.h>

//Creamos una estructura
typedef struct
{
    char componente[50];
    int cantidad;
    float precio_unidad;
} registro_piezas;

//Creamos una funcion que toma como argumento una structura
void printComponente(registro_piezas pieza);

int main()
{
    //Asignamos valor iniciar a los miembros de la estructura
    static registro_piezas res =
    {
        "Resistencia 220 Omh ½ Wattio",
        25,
        0.05
    };

    static registro_piezas cap =
    {
        "Condensador electrolitico 12v 30uF",
        50,
        0.30
    };

    static registro_piezas diode =
    {
        "Diodo 1N4148",
        100,
        0.10
    };

    //Creamo una array que almacena las structuras anteriormente creadas
    registro_piezas array[3] = {res, cap, diode};

    int i=0;
    for(i = 0; i < 3; i++)
    {
        printComponente(array[i]);
    }

    return(0);
}

void printComponente(registro_piezas pieza )
{
    printf("\nComponente:    %s\n", pieza.componente);
    printf("\nCantidad:      %d\n",    pieza.cantidad);
    printf("\nPrecio unidad: %0.2f €\n\n", pieza.precio_unidad);
}
