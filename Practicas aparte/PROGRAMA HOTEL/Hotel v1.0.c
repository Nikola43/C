#include <stdio.h>

#define bono_2 1*0.07
#define bono_7 1*0.10
#define bono_30 1*0.30

/**
Titulo: Hotel v1.0
Desarrollador: Pause Soares.

El programa cogera los datos de un hotel y calculara el precio que debe pagar el cliente.

constantes: ninguna.

Variables:


precio_indivi 40€   = precio de una habitacion de una cama individual.
precio_doble  80€  = precio de una habitacion doble.

precio_desayuno = precio del desayuno de un dia.
precio_almuerzo = precio del almuerzo.
precio_cena = precio de la cena.
completo = Todas las comidas.

personas = precio por noche.

bono_2 7% Descuento         = bono 2 noches 7 % descuento precio total.
bono_7 15% Descuento        = bono 7 noches 15 % descuento precio total.
bono_30 30 %  Descuento     = bono 30 dias 30 % descuento precio total.

descuento_fm                = descuento familia numerosa >= 5 10% descuento.


---------------PROTOTIPO DE FUNCIONES.---------------------------------

void obtener_datos(void) = Obtiene los datos del usuario.

*/

void explicar_programa(void);

void obtener_datos(void);

float calc_comida (float alimentacion);

float descuento(float bono);

float actividades(float actividad);

float servicio_limpieza(float limpieza);

main()
{
    float precio_bono;
    explicar_programa();
    obtener_datos();


}

void explicar_programa(void)
{

    printf("\nEste programa calcula el precio que debe \n");
    printf("pagar el cliente.\n");
    system("pause>nul");
    system("cls");


}///Fin explicar programa.

void obtener_datos(void)
{


    float limpiar;
    float precio_total;
    float comida;
    char eleccion;
    float dias;
    float actividad_realizada;

    head:
    system("cls");
    printf("\nSelecciona el tipo de habitacion.\n");
    printf("\nA] Habitacion individual. B] Habitacion doble\n");
    printf("\nTipo: ");
    scanf("%c",&eleccion);
    switch(eleccion)
    {
        case 'A':
        {
        system("cls");

        float total;
        float rebaja_2;
        float precio_bono;
        float actividad_realizada;


        float descuento_final_bono;

        precio_total = precio_total + 40;

        total = precio_total + calc_comida(comida);

        limpiar = servicio_limpieza(limpiar);
        total = total + limpiar;

        actividades(actividad_realizada);

        total = total + actividades(actividad_realizada);
        printf("\nEscriba cuantos dias desea estar: ");
        scanf("%f",&dias);
        total = total * dias;
        printf("El precio de %0.0f dia/s es: %0.0f Euros\n", dias, total );

         rebaja_2 = descuento(precio_bono);
        descuento_final_bono = total * rebaja_2;

        total = total - descuento_final_bono;

        printf("\nEl precio total de la estancia es: %0.2f Euros\n",total);

        printf("\nFin\n");
        system("pause>nul");
        }///Fin case A
        break;

        case 'B':
        {
        system("cls");

        float total;
        float rebaja_2;
        float precio_bono;
        float actividad_realizada;


        float descuento_final_bono;

        precio_total = precio_total + 80;

        total = precio_total + calc_comida(comida);

        limpiar = servicio_limpieza(limpiar);
        total = total + limpiar;

        actividades(actividad_realizada);

        total = total + actividades(actividad_realizada);
        printf("\nEscriba cuantos dias desea estar: ");
        scanf("%f",&dias);
        total = total * dias;
        printf("El precio de %0.0f dia/s es: %0.0f Euros\n", dias, total );

        rebaja_2 = descuento(precio_bono);
        descuento_final_bono = total * rebaja_2;

        total = total - descuento_final_bono;

        printf("\nEl precio total de la estancia es: %0.2f Euros\n",total);

        printf("\nFin\n");
        system("pause>nul");
        }///Fin case B
        break;

    default:
    {
        goto head;
    }///Fin default
    break;

    }///Fin switch tipo de bono.
}

float calc_comida (float alimentacion)
{
    char eleccion_comida;
    float comida;


     alimento:
     system("cls");
     printf("\nSelecciona la tarifa de comida.\n");
     printf("\nA] Desayuno. B] Almuerzo. C] Cena. D] Todo incluido. E] Ninguna.\n");
     printf("Seleccione lo que desea: ");
     scanf("%s",&eleccion_comida);

     switch(eleccion_comida)
     {


        case 'A':
        {
        comida = comida + 5;
        printf("\nEl precio del desayuno es %0.0f Euros",comida);
        return(comida);
        system("pause>nul");
        }/**Fin case A.*/
        break;

        case 'B':
        {
        comida = comida + 10;
        printf("\nEl precio del almuerzo es %0.0f Euros",comida);
        return(comida);
        system("pause>nul");
        }/**Fin case B*/
        break;

        case 'C':
        {
        comida = comida  + 10;
        printf("\nEl precio de la cena es %0.0f Euros",comida);
        return(comida);
        system("pause>nul");
        }/**Fin case C*/
        break;

        case 'D':
        {
        comida = comida  + 25;
        printf("\nEl precio del todo incluido es %0.0f Euros",comida);
        return(comida);
        system("pause>nul");
        }/**Fin case C*/
        break;

        case 'E':
        {
        comida = comida  + 0;
        printf("\nEl precio de la comida son %0.0f",comida);
        system("pause>nul");
        return(comida);
        }/**Fin case C*/
        break;

        default :
        {
         printf("\nSeleccione una tarifa de comida valida.\n");
         system("pause>nul");
         goto alimento;
        }/**Fin default*/

     }///Fin sentencia switch.
}///Fin Funcion_calcular comida.

float descuento(float bono)
{

    system("pause>nul");
    bonos:
    system("cls");
    printf("\nAplicar bono.\n");

        char tipo_bono;
        float precio_bono;

        printf("\nTipos de bono.\n");
        printf("A] Bono 2 dias. B] Bono 7 dias. C] Bono 30 dias. D] Ninguno.\n");
        printf("Seleccione el bono: ");
        scanf("%s",&tipo_bono);
        switch(tipo_bono)
        {
            case 'A':
            {
                precio_bono = bono_2;
                return(precio_bono);
            }
            break;

            case 'B':
            {
                precio_bono = bono_7;
                return(precio_bono);
            }
            break;

            case 'C':
            {
                precio_bono = bono_30;
                return(precio_bono);
            }
            break;

            case 'D':
            {
                printf("\nNo se ha aplicado ningun bono.\n");
                precio_bono = 0;
                return(precio_bono);
            }
            break;


            default:
            {
                printf("\nSelecciona un bono valido.\n");
                system("pause>nul");
                goto bonos;
            }
            break;
        }
    }///Fin funcion Descuento.

float servicio_limpieza(float limpieza)
{



    char eleccion;
    float limpiar;

    cabeza:
    system("cls");
    printf("\nSeleccione que servicios quiere.\n");
    printf("A] Limpieza diaria. B] limpieza semanal. C] Ninguno.\n");
    printf("Servicio: ");
    scanf("%f",&eleccion);

    switch(eleccion)
    {
        case 'A':
        {
            limpiar = limpiar + 5;
            return(limpiar);
        }///Fin case A limpieza.
        break;

        case 'B':
        {
            limpiar = limpiar + 10;
            return(limpiar);
        }///Fin case B limpieza.
        break;

        case 'C':
        {
            limpiar = 0;
            return(limpiar);
        }///Fin case C limpieza.
        break;

        default :
        {
            goto cabeza;

        }///Fin default limpieza
        break;
    }///Fin switch limpieza.



}///Fin servicio_limpieza.

float actividades(float actividad)
{
    char eleccion;
    float actividad_realizada;
    head_actividades:
    system("cls");

    printf("\nActividades Extra.\n");
    printf("A] Montar a caballo. B] Museo del prado. C] Aguas termales.\n");
    printf("Actividad: ");
    scanf("%s",&eleccion);

    switch(eleccion)
    {
        case 'A':
        {
        actividad_realizada = actividad_realizada + 30;
        return(actividad_realizada);
        }///Fin case A.
        break;

        case 'B':
        {
        actividad_realizada = actividad_realizada + 35;
        return(actividad_realizada);
        }///Fin case B.
        break;

        case 'C':
        {
        actividad_realizada = actividad_realizada + 20;
        return(actividad_realizada);
        }///Fin case C.
        break;

        default:
        {
            printf("\nSeleccione una opcion valida.\n");
            system("pause>nul");
            goto head_actividades;
        }

    }///Fin switch.




}///Fin actividades.
