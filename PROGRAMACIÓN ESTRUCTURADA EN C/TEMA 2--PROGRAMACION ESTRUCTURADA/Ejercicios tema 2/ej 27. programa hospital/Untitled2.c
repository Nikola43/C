#include <stdio.h>

void obtener_valores(void);
///Obtener valores.

float precio_total(float dias_hospital, float coste_consulta, float precio_medicina, float costes_diversos, float precio_dia, float seguro);

main()
{
    float total;
    obtener_valores();
}///Fin main.

void obtener_valores(void)
{
    float dias;
    float coste;
    float p_medicina;
    float c_diversos;
    float p_dia;
    float deduccion;
    float total;

    printf("Introduce los siguientes valores: \n");
    printf("\n");

    printf("Numero de dias en el hospital: ");
    scanf("%f",&dias);

    printf("Coste de la consulta: ");
    scanf("%f",&coste);

    printf("Precio de las medicinas: ");
    scanf("%f",&p_medicina);

    printf("Costes diversos: ");
    scanf("%f",&c_diversos);

    printf("Precio por dia: ");
    scanf("%f",&p_dia);

    printf("Deduccion del seguro: ");
    scanf("%f",&deduccion);

    printf("\n");
    total = precio_total(dias, coste, p_medicina, c_diversos, p_dia, deduccion );
    printf("\nEl precio total es %0.0f",total);

    total = precio_total(dias, coste, p_medicina, c_diversos, p_dia, deduccion ) - deduccion;
    printf("\nEl precio total menos el seguro es %0.0f",total);

    total = precio_total(dias, coste, p_medicina, c_diversos, p_dia, deduccion ) - p_medicina - deduccion ;
    printf("\nEl precio total menos el seguro y las medicinas es %0.0f",total);

    system("pause>nul");
}

float precio_total(float dias_hospital, float coste_consulta, float precio_medicina, float costes_diversos, float precio_dia, float seguro)
{
    float total;
    float precio_estar_hospital;

    precio_estar_hospital = precio_dia * dias_hospital;

    total = coste_consulta + precio_medicina + costes_diversos + seguro + precio_estar_hospital;
    return(total);
}


