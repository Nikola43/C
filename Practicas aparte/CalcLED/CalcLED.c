///Incluyendo librerias.
#include <stdio.h>
///Definiendo atajos.
#define borrar_w system("pause");
#define pausa_w system("pause>nul");

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



/**Definiendo protoripo de funciones.
void calcular_led_individual(void);
void explicar_programa(void);
void calcular_led_serie(void);
void calcular_led_paralelo(void);
void resistor(void);

//------------Fin definiciones--------*/

///Prototipo de funciones.
void calcular_led_individual(float *volA, float *volL, float *ampLED, float *res, float *pot);
void explicar_programa(void);
void calcular_led_serie(void);
void calcular_led_paralelo(void);
void mostrarDatos();
///----------------------//

void main()
{
    mostrarDatos();
}//Fin main.

void explicar_programa(void)
{
    system("color a");
    borrar_w
    printf(".::LED CALCULATOR V1::.\n\n");
    printf("Este programa permite calcular la resitencia para\n");
    printf("tus circuitos con leds individuales, en serie y en paralelo.\n");
    printf("y en paralelo.\n");
    pausa_w;
}//Fin explicar programa.

void calcular_led_serie(void)
{
    float vol_alimentacion;
    float vol_led;
    float vol_led_temp;
    float amperaje_led;
    float resistencia;
    float potencia;
    float numero_leds = 1;
    float temp;
    borrar_w;

    ///Entrada de datos.
    printf(".::CALCULAR CIRCUITO LED EN SERIE::.\n\n");
    printf("Introduce el valor de la fuente de alimentacion en voltios: ");
    scanf("%f",&vol_alimentacion);
    printf("Introduce el voltaje de los leds en serie en voltios: ");
    scanf("%f",&vol_led);
    printf("Introduce el amperaje al que trabaja el led en mA: ");
    scanf("%f",&amperaje_led);
    printf("Introduce cuantos leds quieres conectar en serie: ");
    scanf("%f",&numero_leds);

    ///Operaciones
    vol_led_temp = 0;

    if (numero_leds > 0)
    {
        for ( temp=0 ; temp < numero_leds ; temp++ )
        {
            vol_led_temp = vol_led_temp + vol_led;

        }///Fin for

        resistencia = (vol_alimentacion - vol_led_temp) / amperaje_led;
        potencia = (vol_alimentacion - vol_led_temp) * amperaje_led;

        ///Salida de datos
        printf("\nPara un circuito a %0.0f voltios con %0.0f leds en serie hay que poner una\n", vol_alimentacion, numero_leds);
        printf("resistencia de %0.1f ohmios disipando una potencia de %0.3f Watios.", resistencia, potencia );

    }///Fin if.

}

void calcular_led_individual(float *volA, float *volL, float *ampLED, float *res, float *pot)
{
    borrar_w
    ///Entrada de datos.
    printf(".::CALCULAR CIRCUITO LED INDIVIDUAL::.\n\n");
    printf("Introduce el valor de la fuente de alimentacion en voltios: ");
    scanf("%f",&volA);
    printf("Introduce el voltaje del led en voltios: ");
    scanf("%f",&volL);
    printf("Introduce el amperaje al que trabaja el led en mA: ");
    scanf("%f",&ampLED);

    ///Operaciones
    *res = (*volA - *volL / *ampLED);
    *pot = (*volA - *volL) * *ampLED;
}

        void calcular_led_paralelo(void)
{
    ///Definiendo variables.
    float vol_alimentacion;
    float vol_led;
    float amperaje_led;
    float resistencia;
    float numero_leds;
    float potencia;
    borrar_w;
    ///-----------------------//

    printf(".::CALCULAR CIRCUITO LED EN PARALELO::.\n\n");
    printf("Introduce el valor de la fuente de alimentacion en voltios: ");
    scanf("%f",&vol_alimentacion);
    printf("Introduce el voltaje del led en voltios: ");
    scanf("%f",&vol_led);
    printf("Introduce el amperaje al que trabaja el led en mA: ");
    scanf("%f",&amperaje_led);
    printf("Introduce cuantos leds quieres conectar en paralelo: ");
    scanf("%f",&numero_leds);

    ///Operaciones--------------------------------------------------------------------------------------------------------------------//


    if (numero_leds > 0)
    {
        resistencia = (vol_alimentacion - vol_led) / (amperaje_led * numero_leds);
        potencia = (vol_alimentacion - vol_led) * amperaje_led;

        ///Salida de datos
        printf("\nPara un circuito a %0.0f voltios con %0.0f leds en paralelo con resistencia unica\n", vol_alimentacion, numero_leds);
        printf("hay que poner una resistencia de %0.1f ohmios disipando una potencia de %0.3f Watios.", resistencia, potencia );

    }///-------------------------------------------------------------------------------------------------------------------------------//
}///Fin calcular_led_paralelo

int res(void)
{
    system("cls");
    int e1,e2,e3,e4,n4;
    printf(".::CALCULAR CIRCUITO LED EN PARALELO::.\n\n");
    printf("[0]Negro\n");
    printf("[1]Marron\n");
    printf("[2]Rojo\n");
    printf("[3]Naranja\n");
    printf("[4]Amarillo\n");
    printf("[5]Verde\n");
    printf("[6]Azul\n");
    printf("[7]Morado\n");
    printf("[8]Gris\n");
    printf("[9]Blanco\n");
    printf("[10]Dorado\n");
    printf("[11]Plateado\n");
    printf("[12]Sin color\n\n");
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
    case 1:
        n4 = 1;
        break;
    case 2:
        n4 = 2;
        break;
    case 10:
        n4 = 5;
        break;
    case 11:
        n4 = 10;
        break;
    case 13:
        n4 = 0;
        break;

    default:
    {
        printf("No se ha seleccionado ninguna opcion valida.");
        system("pause>nul");
        system("cls");
    }
    }

    switch(e3)
    {
    case 0:
        printf("\nLa resistencia es de %d%d%s ohmios con %d de tolerancia\n",e1,e2,m0,n4);
        break;
    case 1:
        printf("\nLa resistencia es de %d%d%s ohmios con %d de tolerancia\n",e1,e2,m1,n4);
        break;
    case 2:
        printf("\nLa resistencia es de %d%d%s ohmios con %d de tolerancia\n",e1,e2,m2,n4);
        break;
    case 3:
        printf("\nLa resistencia es de %d%d%s ohmios con %d de tolerancia\n",e1,e2,m3,n4);
        break;
    case 4:
        printf("\nLa resistencia es de %d%d%s ohmios con %d de tolerancia\n",e1,e2,m4,n4);
        break;
    case 5:
        printf("\nLa resistencia es de %d%d%s ohmios con %d de tolerancia\n",e1,e2,m5,n4);
        break;
    case 6:
        printf("\nLa resistencia es de %d%d%s ohmios con %d de tolerancia\n",e1,e2,m6,n4);
        break;
    case 7:
        printf("\nLa resistencia es de %d%d%s ohmios con %d de tolerancia\n",e1,e2,m7,n4);
        break;
    case 8:
        printf("\nLa resistencia es de %d%d%s ohmios con %d de tolerancia\n",e1,e2,m8,n4);
        break;
    case 9:
        printf("\nLa resistencia es de %d%d%s ohmios con %d de tolerancia\n",e1,e2,m9,n4);
        break;
    default:
    {
        printf("No se ha seleccionado ninguna opcion valida");
        system("pause>nul");
        system("cls");
    }
    }
}

void mostrarDatos()
{
    ///Variables fincion calcular_led_individual();
    float vol_alimentacion;
    float vol_led;
    float amperaje_led;
    float resistencia;
    float potencia;

    char eleccion;
    while(eleccion != '0')
    {

        explicar_programa();

        borrar_w;
        printf("[A]   Calcular led individual.\n");
        printf("[B]   Calcular leds en serie.\n");
        printf("[C]   Calcular leds en paralelo.\n");
        printf("[D]   Calcular resistencias.\n");
        printf("Seleccione la letra correspondiente a la accion que desea realizar: ");
        scanf("%c",&eleccion);

        switch(eleccion)
        {
        case 'A':
            {
                calcular_led_individual(&vol_alimentacion, &vol_led, &amperaje_led, &resistencia, &potencia);
                ///Salida de datos
                printf("\nPara un circuito a %0.0f voltios hay que poner una\n", vol_alimentacion);
                printf("resistencia de %0.1f ohmios disipando una potencia de %0.3f Watios.", resistencia, potencia);
            }
            break;
        case 'B':
            calcular_led_serie() ;
            break;
        case 'C':
            calcular_led_paralelo();
            break;
        case 'D':
            res();
            break;
        default :
            borrar_w printf("Elije una opcion valida.\n");
            break;
        }///Fin switch.
        pausa_w
        borrar_w
    }

}///Fin mostrarDatos

