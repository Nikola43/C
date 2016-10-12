#include <stdio.h>

/*
Este programa calcula el volumen de 3 habitaciones por separdo luego los suma en un total.
*/

void explicacion_del_programa(void);
///Explica el funcionamiento del programa.

void obtener_valoresA1(void);
///Obtiene los valores de la habitacion 1

void obtener_valoresA2(void);
///obtiene los valores de la habitacion 2

void obtener_valoresA3(void);
///obtiene los valores de la habitacion 3

float calc(float altura, float anchura, float profundidad);
///Esta funcion calcula el volumen de las habitaciones.

main()
{
    float totaltodo;
    float total;
    float total2;
    float total3;

    explicacion_del_programa();
    obtener_valoresA1();
    obtener_valoresA2();
    obtener_valoresA3();

    printf("\n\nLas habitaciones entre todas tiene un total de %f metros cubicos.",total);
    system("pause>nul");

}///FIN MAIN

void explicacion_del_programa(void)
{
    printf("\nEste programa calcula el volumen de 3 habitaciones \n");
    printf("por separado y luego los suma todos.");
    system("pause>nul");
}///fin explicacion del programa.

void obtener_valoresA1(void)
{
    float alto1;
    float ancho1;
    float prof1;
    float total;

    system("cls");
    printf("Introduzca los siguientes valores para la habitacion 1: \n");

    printf("Altura en metros: ");
    scanf("%f",&alto1);

    printf("Anchura en metros: ");
    scanf("%f",&ancho1);

    printf("Profundidad en metros: ");
    scanf("%f",&prof1);
    printf("\n");
    total = calc(alto1, ancho1, prof1);
    printf("\nLa habitacion 1 mide %0.0f * %0.0f * %0.0f y tiene un volumen total de %0.0f metros cubicos.\n",alto1, ancho1, prof1, total);
    system("pause>nul");

}///Fin obtener valores.

void obtener_valoresA2(void)
{
    float alto2;
    float ancho2;
    float prof2;
    float total2;

    system("cls");
    printf("Introduzca los siguientes valores para la habitacion 2: \n");

    printf("Altura en metros: ");
    scanf("%f",&alto2);

    printf("Anchura en metros: ");
    scanf("%f",&ancho2);

    printf("Profundidad en metros: ");
    scanf("%f",&prof2);
    printf("\n");
    total2 = calc(alto2, ancho2, prof2);
    printf("\nLa habitacion 2 mide %0.0f * %0.0f * %0.0f y tiene un volumen total de %0.0f metros cubicos.\n",alto2, ancho2, prof2, total2);
    system("pause>nul");
}

void obtener_valoresA3(void)
{
    float alto3;
    float ancho3;
    float prof3;
    float total3;

    system("cls");
    printf("Introduzca los siguientes valores para la habitacion 3: \n");

    printf("Altura en metros: ");
    scanf("%f",&alto3);

    printf("Anchura en metros: ");
    scanf("%f",&ancho3);

    printf("Profundidad en metros: ");
    scanf("%f",&prof3);
    printf("\n");
    total3 = calc(alto3, ancho3, prof3);
    printf("\nLa habitacion 3 mide %0.0f * %0.0f * %0.0f y tiene un volumen total de %0.0f metros cubicos.\n",alto3, ancho3, prof3, total3);
    system("pause>nul");
}

float calc(float altura, float anchura, float profundidad)
{
    float total;

    total = altura * anchura * profundidad;
    return(total);
}

