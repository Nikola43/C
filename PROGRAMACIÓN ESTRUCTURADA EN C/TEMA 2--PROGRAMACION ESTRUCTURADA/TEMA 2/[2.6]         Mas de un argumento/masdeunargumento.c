#include <stdio.h>

/*Prototipo de la funcion*/

float reactancia_capacitiva(float capacidad, float frecuencia);

/*Esta funcion calcula la reactancia capacitativa para un valor de condensador y una frecuencia*/

main()
{
    float faradios;
    float hertzios;
    float reactancia;

    printf("Introduce el valor del condensador en faradios: ");
    scanf("%f", &faradios);
    printf("Introduce el valor de la frecuencia en hertzios: ");
    scanf("%f", &hertzios);

    reactancia = reactancia_capacitiva(faradios, hertzios);

    printf("la reactancia de un condensador de %f faradios\n", faradios);
    printf("a la frecuencia de %f hertzios es %f ohmios\n", hertzios, reactancia);
    system("pause");
}

float reactancia_capacitiva(float capacidad, float frecuencia)
{
    float reactancia;
    float pi = 3.14159;

    reactancia = 1/(2 * pi * frecuencia * capacidad);
    return(reactancia);
}
