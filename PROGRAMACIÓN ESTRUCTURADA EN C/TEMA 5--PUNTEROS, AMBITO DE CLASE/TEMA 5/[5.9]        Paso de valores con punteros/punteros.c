#include <stdio.h>

void explicarPrograma();
void obtenerValores(float *r, float *v);
float calc(float res, float vol);
void imprimirRespuesta(float intensidad);

void main()
{
    float resistencia = 0;
    float voltaje = 0;
    float intensidad = 0;

    explicarPrograma();
    obtenerValores(&resistencia, &voltaje);
    intensidad = calc(resistencia,voltaje);
    imprimirRespuesta(intensidad);

}///Fin main();

void explicarPrograma()
{
    printf("\nEste programa calcula la intensidad en amperios dados el voltaje y la resistencia\n");

}///Fin explicarPrograma();

void obtenerValores(float *r, float *v)
{
    float resistencia;
    float voltios;

    printf("Introduce la resistencia en ohmios: ");
    scanf("%f",&resistencia);
    printf("Introduce el voltaje en voltios: ");
    scanf("%f",&voltios);

    *r = resistencia;
    *v = voltios;
}///Fin obtenerValores();

float calc(float res, float vol)
{
    float intensidad = 0;
    intensidad = vol / res;
    return(intensidad);
}///Fin calc()

void imprimirRespuesta(float intensidad)
{
    printf("El valor de la intensidad es de %f amperios\n",intensidad);
}///fin imprimirRespuesta()
