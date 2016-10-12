#include <stdio.h> ///Incluyendo la libreria stdio.h.
#include <math.h>  ///Incluyendo la libreria math.h.

#define PI 3.141592  ///Definiendo el Numero PI.
#define cuadrado(x) x*x     ///Definiendo la funcion cuadrado(x)
#define X_L(f,l) 2*PI*f*l    ///Definiendo Reactancia inductiva en ohmios.
#define Z(f,l,r) sqrt(cuadrado(X_L(f,l)) + cuadrado(r)) ///Definiendo impedencia del circuito en ohmios.
#define V_L(f,l,r,v) v*(X_L(f,l)/Z(f,l,r)) ///Caida de la tensión en voltios en la inductancia.
#define V_R(f,l,r,v) v*(r/Z(f,l,r))         ///Caida de la tensión en voltios en la resistencia.



/*
Programa: Caída de tensión en circuito RL.
Desarollado por: Paulo Soares Teixeira.

Descripción: Este programa calcula la caída de tensión
en voltios en una inductancia y una resistencia en serie
en un circuito RL.

Variables:
    resistencia = Valor de la resistencia en serie en ohms.
    inductancia = Valor de la inductancia en serie en henrios.
    frecuencia = Valor de la frecuencia en hertzios.
    voltaje = Valor del voltaje de la fuente en voltios.
    v_inductancia = Valor del voltaje en la inductancia
    v_resistencia = Valor del voltaje en la resistencia.

Constantes: ninguna.

Prototipos de funcion.
*/

float calcular_y_mostrar(float f, float l, float r, float v);
///Funcion que calcula y muestra el resultado.

void explicacion_del_programa(void);
///Esta funcion explica al usuario lo que hace el programa

void obtener_valores(void);
///Esta funcion obtiene todos los datos que necesitamos.

main()
{
    explicacion_del_programa(); ///Explica el programa al usuario.
    obtener_valores(); ///Obtiene los valores.
    return(0);
} ///Fin main.

void explicacion_del_programa(void)
{
    printf("\n\nEste programa calcula la caida de tension\n");
    printf("en una inductancia y una resistencia en serie en\n");
    printf("un circuito RL. Debe introducir los valores de la\n");
    printf("resistencia en ohmios, la inductancia en henrios,\n");
    printf("la frecuencia aplicada en hertzios y el voltaje\n");
    printf("de la fuente de alimentacion en voltios\n");

} ///Fin funcion explicacion_del_programa.

void obtener_valores(void)
{
    float resitencia; ///Valor de la resistencia en ohmios.
    float inductancia; ///Valor de la inductancia.
    float frecuencia; ///Valor de la frecuencia en hertzios.
    float voltaje; ///Valor del voltaje en voltios.

    printf("\n");
    printf("Introduce los siguientes valores.\n");
    printf("\n");

    printf("Resistencia en ohmios: ");
    scanf("%f",&resitencia);

    printf("Inductancia en henrios: ");
    scanf("%f",&inductancia);

    printf("Frecuencia en hertzios: ");
    scanf("%f",&frecuencia);

    printf("Voltaje en voltios: ");
    scanf("%f",&voltaje);

    calcular_y_mostrar(frecuencia, inductancia, resitencia, voltaje);
}///Fin funcion obtener_valores.

float calcular_y_mostrar(float f, float l, float r, float v)
{
    float v_inductancia; ///Valor voltaje en la inductancia.
    float v_resistencia; ///Valor voltaje en la resistencia.

    v_inductancia = V_L(f,l,r,v); ///Calcula el voltaje en la inductancia.

    v_resistencia = V_R(f,l,r,v);   ///Calcula el voltaje en la resistencia.

     printf("\n\nPara un circuito RL en serie que consta de una\n");
    printf("inductancia de %0.0f henrios y una resistencia de %0.0f homios\n",l,r);
    printf("con una frecuencia aplicada de %0.0f hertzios\n",f);
    printf("y una fuente de %0.0f voltios,\n",v);
    printf("la caida de tension en los componentes es: \n\n");

    printf("Voltaje en la inductancia => %f voltios\n",v_inductancia);
    printf("Voltaje en la resistencia => %f voltios\n",v_resistencia);
    system("pause>nul");
    return(0);

}
