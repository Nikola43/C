#include <stdio.h>


/*
1.      Informacion del programa.
1.1.    Calculador potencia.
1.2.    Desarollado por Paulo.

Definicion: Este programa calcula la potencia disipada par un circuito.
El pograma pide los datos por teclado, hace el calculo y los muestra por pantalla el resultado.

Variables: potencia, intensidad, voltaje.
*/

void explicacion_del_programa(void);
///Funcion que explica el programa al usuario.

void obtener_valores(void);
///Esta funcion obtiene los datos del usuario.

float calculo(float amperios, float voltios);
///Esta funcion calcula los datos.

void mostrar_en_pantalla(void);
///Esta funcion muestra en pantalla el resultado

void explicacion_del_programa(void)
{
    printf("\n\nEste programa calcula la potencia recibiendo\n");
    printf("la intensidad en amperios y el voltaje en voltios.\n");

} ///Fin funcion explicacion_del_programa.

void obtener_valores(void)
{
    float voltaje;
    float intensidad;

    printf("\nIntroduzca los siguientes datos: \n");

    printf("Voltaje en voltios: ");
    scanf("%f",&voltaje);

    printf("Intensidad en amperios: ");
    scanf("%f",&intensidad);
    system("pause>nul");
}

float calculo(float amperios, float voltios)
{
    float potencia;
    potencia = amperios * voltios;
    return(potencia);

}

void mostrar_en_pantalla(void)
{

    float potencia;
    float intensidad;
    float voltaje;

    potencia = calculo(intensidad, voltaje);

    printf("\n\nCon una intensidad de %0.0f amperios \n",intensidad);
    printf("y un voltaje de %0.0f voltios, ",voltaje);
    printf("la potencia disipada por el circuito \n");
    printf("es de %f Watts",potencia);
    return(0);
}
