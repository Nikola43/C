#include <stdio.h>

main()
{
    char eleccion;
    float voltaje;
    float intensidad;
    float resistencia;

    printf("\nA)Voltaje B)Intensidad C)Resistencia.\n ");
    printf("\nElija que desea calcular: ");
    scanf("%c",&eleccion);

    switch(eleccion)
    {
        case 'A': /**Calcular el voltaje.*/
        {

            system("cls");
            printf("Ha elegido calcular el voltaje.\n");

            printf("Introduce la intensidad en amperios: ");
            scanf("%f",&intensidad);

            printf("Introduce la resistencia en ohmios: ");
            scanf("%f",&resistencia);

            voltaje = intensidad * resistencia;

            printf("El voltaje en voltios es: %0.2f",voltaje);
            system("pause>nul");
        }///Fin case A.
        break;

        case 'B': /**Calcular la intensidad.*/
        {
            system("cls");
            printf("Ha elegido calcular la intensidad.\n");

            printf("Introduce el voltaje en voltios: ");
            scanf("%f",&voltaje);

            printf("Introduce la resistencia en ohmios: ");
            scanf("%f",&resistencia);

            intensidad = voltaje / resistencia;

            printf("La intensidad en amperios es: %0.2f",intensidad);
            system("pause>nul");
        }///Fin case B.
        break;

        case 'C': /**Calcular la resistencia*/
        {
            system("cls");
            printf("Ha elegido calcular la resistencia.\n");

            printf("Introduce el voltaje en voltios: ");
            scanf("%f",&voltaje);

            printf("Introduce la intensidad en amperios: ");
            scanf("%f",&intensidad);

            resistencia = voltaje / intensidad;

            printf("La resistencia es %0.2f ohmios.\n",resistencia);
            system("pause>nul");
        }///Fin case C.
        break;

        default : /**En caso de que la eleccion no sea ninguna de las establecidas.*/
        {
            system("cls");
            printf("Eleccion incorrecta.\n");
        }///Fin default.

    }///Fin switch.
}///Fin main.
