#include <stdio.h>

    //definimos una 'enum' inicializada
    enum thevenin {fuente = 12, res = 150};

int main()
{
    float carga;
    float intensidad;

    printf("Introduce el valor de la carga en la resistencia: ");
    scanf("%f", &carga);

    intensidad = fuente / (res + carga);  //Calculamos la formula con las constantes de la 'enum'

    printf("La intensidad del circuito es %f amperios\n", intensidad);

    return(0);
}
