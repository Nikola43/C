#include <stdio.h>
#define PI 3.141592
#define X_c(c,f) 1/(2*PI*f*c)
#define X_l(l,f) 2*PI*f*l
#define impedencia_serie(c,l,f) X_l(l,f) - X_c(c,f)

main()
{   ///Declarando variables
    float capacidad;
    float inductancia;
    float frecuencia;
    float imped;
    ///---------------------

    ///Cuerpo del programa
    printf("Dame la capacidad: "); ///Capturando la capacidad
    scanf("%f",&capacidad);

    printf("Dame la inductancia: ");  ///Capturando la inductancia
    scanf("%f",&inductancia);

    printf("Dame la frecuencia: ");   ///Capturando la frecuecia
    scanf("%f",&frecuencia);

    ///Haciando calculos y formulas
    imped = impedencia_serie(capacidad, inductancia, frecuencia);

    printf("La impedencia de un circuito LC en serie con una\n");
    printf("capacidad de %f faradios, ",capacidad);
    printf("y una inductancia de %f henrios\n",inductancia);
    printf("es %f ohmios.\n",imped);
    system("pause>nul");
    return(0);

}
