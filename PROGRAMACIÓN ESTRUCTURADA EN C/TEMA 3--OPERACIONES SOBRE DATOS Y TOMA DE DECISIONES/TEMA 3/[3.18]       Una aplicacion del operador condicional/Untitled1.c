#include <stdio.h>

main()
{
    float voltaje_led;
    float voltaje_resistencia;
    float voltaje_fuente;
    float intensidad_circuito;
    float resistencia;

    printf("\nIntroduce el votaje de la fuente en voltios: ");
    scanf("%f",&voltaje_fuente);

    printf("\nIntroduce la resistencia en ohmios: ");
    scanf("%f",&resistencia);


                   /**Si la condicion es verdadera------------>Se ejecuta esto------------>Si la condicion es falsa se ejucuta esto*/
    voltaje_led =      (voltaje_fuente < 2.3)?                voltaje_fuente              : 2.3;
    voltaje_resistencia = voltaje_fuente - voltaje_led;
    intensidad_circuito = voltaje_resistencia / resistencia;

    printf("\nLa intensidad total del circuito es %f amperios.\n",intensidad_circuito);





}///Fin main.
