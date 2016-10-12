#include <stdio.h>

main()
{
    float voltaje;
    float resistencia;
    float potencia;

    printf("introduce el voltaje: ");
    scanf("%f",&voltaje);
    if (voltaje >= 100.0)
    {
        printf("Voltaje mayor que 100\n");
        printf("Introduce el valor de la resistencia: ");
        scanf("%f",&resistencia);

        potencia = voltaje * resistencia;

        printf("La disipacion de potencia es %f vatios",potencia);
        system("pause>nul");

    }
    printf("\nEran %f",voltaje);
}
