#include <stdio.h>   ///Incluyendo librerias.
#define clearScreen system("cls")
#define pause system("pause>nul")

void explicar_programa(void);
void calcTiempo(float *vol, float *pres, float *caud, float *tiem);
void calcCaud(float *vol, float *pres, float *caud, float *tiem);


void main()
{
    float volumen = 0; ///Valor del volumen por teclado.
    float presion = 0;; ///Valor de la presion por teclado.
    float caudal = 0;  ///Valor de0l caudal a calcular/teclado
    float tiempo = 0; ///Valor del tiempo en minutos a calcular/teclado.
    float eleccion = 0;

    explicar_programa();
    clearScreen;
    printf("\n");
    printf("1.Tiempo.\n");
    printf("2.Caudal.\n");
    printf("Seleccione que desea calcular: ");
    scanf("%f",&eleccion);

    if(eleccion == 1)
      calcTiempo(&volumen, &presion, &caudal, &tiempo);
    else if (eleccion == 2)
      calcCaud(&volumen, &presion, &caudal, &tiempo);
    else
    {
        clearScreen;
        printf("Seleccione una opcion valida.\n");
        system("pause>nul");
        pause;
    }///Fin else
}

void explicar_programa(void)
{
    printf("\n\nEste programa calcula el tiempo dando el volumen\n");
    printf("en litros, la presion en bares y el caudal en l/m \n");
    printf("o el caudal dando los otors valores antes mencionados.\n");
}   ///Fin explicar_programa.

void calcTiempo(float *vol, float *pres, float *caud, float *tiem)
{
    clearScreen;
    printf("\n\nHa elegido calcular el tiempo.\n\n");
    printf("Introduzca los siguiente valores: \n\n");
    printf("Volumen en litros: ");
    scanf("%f",vol);
    printf("Presion en bares: ");
    scanf("%f",pres);
    printf("Caudal en litros/minuto: ");
    scanf("%f",caud);

    ///Operaciones
    *tiem = *(vol) * *(pres) / *(caud);
    printf("\n\n");
    printf("El tiempo es %3.2f minutos\n",*tiem);
}

void calcCaud(float *vol, float *pres, float *caud, float *tiem)
{
    clearScreen;
    printf("\n\nHa elegido calcular el caudal.\n\n");
    printf("Introduzca los siguiente valores: \n\n");

    printf("Volumen en litros: ");
    scanf("%f",vol);

    printf("Presion en bares: ");
    scanf("%f",pres);

    printf("Tiempo en minutos: ");
    scanf("%f",tiem);

    *caud = *(vol) * *(pres) / *(tiem);
    printf("\n\n");

    printf("El caudal es %1.2f litros/minuto.\n",*caud);
    pause;
}
