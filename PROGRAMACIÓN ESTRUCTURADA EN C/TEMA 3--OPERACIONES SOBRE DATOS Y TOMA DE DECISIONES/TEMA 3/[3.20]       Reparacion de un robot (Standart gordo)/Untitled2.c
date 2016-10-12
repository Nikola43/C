#include <stdio.h>

/*****************************************************************
Programa: Reparacion de un robot.
Desarollado: Paulo.

Descripcion: Este programa muestra los pasos a seguir
             para reparar un robot..

Variables:
medida = voltaje que usa.
estado_luz = Valor del piloto.
*******************************************************************/


/**Prototipo de funciones.*****************************/

void explicar_programa(void);
/**Explica el programa al usuario.*/

float brazo(void);
/**Esta funcion contiene la rutina del brazo del robot.*/

void unidad_de_potencia(void);
/**Esta funcion es la rutina de servicio de la unidad de potencia.*/

void comprobar_luz(void);
/**Muestra las instrucciones para probar el estado del indicador luminoso*/

void desconexion_dispositivo_brazo(void);
/**Muestra las instrucciones para comprobar la unidad de desconexion
 del dispositivo del brazo*/

main()
{
    float medida;  ///Medida introducida por el usuario.

    explicar_programa(); ///Llama a la funcion explicar programa.
    medida = brazo();

    if(medida > 35)
        unidad_de_potencia();
    else
    if((medida <= 35) && (medida >= 30))
        comprobar_luz;
    else
    if(medida < 30)
        desconexion_dispositivo_brazo();

}/**FIN MAIN*/

void explicar_programa(void)
{
    printf("\nEste programa calcula lo del robot\n");

}///Fin expplicar_programa.

float brazo(void)
{
    float medida;
    printf("Introduce el voltaje: ");
    scanf("%f",&medida);
    return(medida);
}///Fin brazo.

void unidad_de_potencia(void)
{
    printf("Remplace la unidad de potencia del brazo.\n");

}///Fin unidad_de_potencia.

void comprobar_luz(void)
{
    int estado_luz;
    head_luz:
    system("cls");
    printf("Introduce lo que marca el indicador de estado.\n");
    printf("1] Rojo. 2] Verde. 3] Apagado\n");
    scanf("%d",&estado_luz);

    switch(estado_luz)
    {
        case 1:
        {
            printf("Desconecte la alimentacion y remplace el fusible F1\n");
        }///Fin case 1.
        break;

        case 2:
        {
            printf("Desconecte la alimentacion y remplace la placa del dispositivo.\n");
        }///Fin case 2.
        break;

        case 3:
        {
            printf("Remplace la bombilla.\n");
        }///Fin case 3.

        default:
        {
            printf("Seleccione una opcion valida\n");
            goto head_luz;
        }///Fin default.
    }///Fin switch estado_luz.


}///Fin comprobar_luz.

void desconexion_dispositivo_brazo(void)
{
    float medida;

    printf("Introduce el voltaje: \n");
    scanf("%f",&medida);

    medida = (medida > 30)? 30 : medida;

    if(medida < 30)
    {
        printf("Remplace la unidad de potencia del brazo.\n");
    }///Fin if medida.
    else
    if(medida == 30)
    {
        printf("cambia otra cosa.\n");
    }///Fin if medida.

}///Fin desconexion_dispositivo_brazo.

