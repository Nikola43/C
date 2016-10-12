///Incluyendo librerias.
#include <stdio.h>

///Definiendo atajos.
#define cls system("clear")
#define pause system("read t")

///Prototipo de funciones
void explicar_programa(void);
void calcular_led_serie(void);
void calcular_led_paralelo(void);

///Funcion principal
int main()
{
    explicar_programa();
    pause; cls;
    int eleccion;
    do
    {
        printf("\t\t.::LED CALCULATOR V1::.\n\n");
        printf("[1] Calcular leds en serie.\n");
        printf("[2] Calcular leds en paralelo.\n");
        printf("[3] Calcular resistencias.\n");
        printf("[0] Salir.\n\n");
        printf("Seleccione la letra correspondiente a la accion que desea realizar: ");
        scanf("%i",&eleccion);
        cls;
        switch(eleccion)
        {
            case 1: calcular_led_serie(); break;
            case 2: calcular_led_paralelo(); break;
            case 3: res(); break;
            case 0: break;
            default : cls; printf("Elije una opcion valida.\n"); break;
        }///Fin switch.
    }while(eleccion != 0);
    return(0);
}//Fin main.

void explicar_programa(void)
{
    printf("\t\t.::LED CALCULATOR V1::.\n\n");
    printf("Este programa permite calcular la resitencia limitadora para\n");
    printf("los leds en serie y en paralelo.\n");
}//Fin explicar_programa.

void calcular_led_serie(void)
{
    float vol_alimentacion = 0;
    float vol_led = 0;
    float amperaje_led = 0;
    float vol_led_temp = 0;
    float resistencia = 0;
    float potencia = 0;
    int   numero_leds = 0;
    int   counter = 0;

    ///Entrada de datos.
    printf(".::CALCULAR RESISTENCIA PARA LEDS EN SERIE::.\n\n");
    printf("Introduce el voltaje de la fuente de alimentacion en voltios: ");
    scanf("%f",&vol_alimentacion);
    printf("Introduce el voltaje al que trabaja el led en voltios: ");
    scanf("%f",&vol_led);
    printf("Introduce el amperaje al que trabaja el led en mA: ");
    scanf("%f",&amperaje_led);
    printf("Introduce cuantos leds quieres conectar en serie: ");
    scanf("%i",&numero_leds);

    ///Operaciones
    if(numero_leds > 0)
    {
        for( counter=0; counter<numero_leds; counter++ )
            vol_led_temp += vol_led;

        resistencia = (vol_alimentacion - vol_led_temp) / (amperaje_led / 1000);
        potencia = (vol_alimentacion - vol_led_temp) * (amperaje_led / 1000);

        ///Salida de datos
        if(resistencia > 0)
        {
            printf("\nPara una fuente de %0.2f voltios con %i leds en serie hay que poner una\n", vol_alimentacion, numero_leds);
            printf("resistencia de %0.2f ohmios, disipando una potencia de %0.2f Watios.\n", resistencia, potencia );
        }
        else
            printf("El voltaje de la fuente de alimentacion debe ser mayor de %0.2f voltios\n", vol_alimentacion);
    }///Fin if.
    pause; cls;
}///Fin calcular_led_serie()

void calcular_led_paralelo(void)
{
    ///Definiendo variables.
    float vol_alimentacion;
    float vol_led;
    float amperaje_led;
    float resistencia;
    int numero_leds;
    float potencia;

    ///Entrada de datos.
    printf(".::CALCULAR RESISTENCIA PARA LEDS EN PARALELO::.\n\n");
    printf("Introduce el voltaje de la fuente de alimentacion en voltios: ");
    scanf("%f",&vol_alimentacion);
    printf("Introduce el voltaje al que trabaja el led en voltios: ");
    scanf("%f",&vol_led);
    printf("Introduce el amperaje al que trabaja el led en mA: ");
    scanf("%f",&amperaje_led);
    printf("Introduce cuantos leds quieres conectar en paralelo: ");
    scanf("%i",&numero_leds);

    ///Operaciones
    if (numero_leds > 0)
    {
        resistencia = (vol_alimentacion - vol_led) / ((amperaje_led / 1000) * numero_leds);
        potencia = (vol_alimentacion - vol_led) * ((amperaje_led / 1000) * numero_leds);

        ///Salida de datos
        if(resistencia > 0)
        {
            printf("\nPara una fuente de %0.2f voltios con %i leds en paralelo hay que poner una\n", vol_alimentacion, numero_leds);
            printf("resistencia de %0.2f ohmios, disipando una potencia de %0.2f Watios.\n", resistencia, potencia );
        }
        else
            printf("El voltaje de la fuente de alimentacion debe ser mayor de %0.2f voltios\n", vol_alimentacion);
    }///Fin if
    pause; cls;
}///Fin calcular_led_paralelo

void res(void)
{

    char m0[2] = "";
    char m1[3] = "0";
    char m2[4] = "00";
    char m3[5] = "000";
    char m4[6] = "0000";
    char m5[7] = "00000";
    char m6[8] = "000000";
    char m7[9] = "0000000";
    char m8[10] = "00000000";
    char m9[11] = "000000000";

    int e1,e2,e3,e4,n4;
    printf(".::CALCULAR CIRCUITO LED EN PARALELO::.\n\n");
    printf("[0]  Negro\n");
    printf("[1]  Marron\n");
    printf("[2]  Rojo\n");
    printf("[3]  Naranja\n");
    printf("[4]  Amarillo\n");
    printf("[5]  Verde\n");
    printf("[6]  Azul\n");
    printf("[7]  Morado\n");
    printf("[8]  Gris\n");
    printf("[9]  Blanco\n");
    printf("[10] Dorado\n");
    printf("[11] Plateado\n");
    printf("[12] Sin color\n\n");
    printf("Elije el primer color: ");
    scanf("%d",&e1);
    printf("Elije el segundo color: ");
    scanf("%d",&e2);
    printf("Elije el tercer color: ");
    scanf("%d",&e3);
    printf("Elije el cuarto color: ");
    scanf("%d",&e4);

    switch(e4)
    {
        case 1: n4 = 1; break;
        case 2: n4 = 2; break;
        case 10: n4 = 5; break;
        case 11: n4 = 10; break;
        case 13: n4 = 0; break;

        default:
        {
            printf("No se ha seleccionado ninguna opcion valida.");
            pause; cls;
        }///default
    }

        switch(e3)
    {
        case 0:  printf("\nLa resistencia es de %d%d%s ohmios con %d de tolerancia\n",e1,e2,m0,n4); break;
        case 1:  printf("\nLa resistencia es de %d%d%s ohmios con %d de tolerancia\n",e1,e2,m1,n4); break;
        case 2:  printf("\nLa resistencia es de %d%d%s ohmios con %d de tolerancia\n",e1,e2,m2,n4); break;
        case 3:  printf("\nLa resistencia es de %d%d%s ohmios con %d de tolerancia\n",e1,e2,m3,n4); break;
        case 4:  printf("\nLa resistencia es de %d%d%s ohmios con %d de tolerancia\n",e1,e2,m4,n4); break;
        case 5:  printf("\nLa resistencia es de %d%d%s ohmios con %d de tolerancia\n",e1,e2,m5,n4); break;
        case 6:  printf("\nLa resistencia es de %d%d%s ohmios con %d de tolerancia\n",e1,e2,m6,n4); break;
        case 7:  printf("\nLa resistencia es de %d%d%s ohmios con %d de tolerancia\n",e1,e2,m7,n4); break;
        case 8:  printf("\nLa resistencia es de %d%d%s ohmios con %d de tolerancia\n",e1,e2,m8,n4); break;
        case 9:  printf("\nLa resistencia es de %d%d%s ohmios con %d de tolerancia\n",e1,e2,m9,n4); break;
        default: printf("No se ha seleccionado ninguna opcion valida"); pause; cls;
    }
}
