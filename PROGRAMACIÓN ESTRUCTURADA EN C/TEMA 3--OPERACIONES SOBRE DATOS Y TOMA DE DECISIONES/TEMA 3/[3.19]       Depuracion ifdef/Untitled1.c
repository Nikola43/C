#include <stdio.h>
#define DEPURACION

main()
{
    #ifdef DEPURACION  ///Dice que si DEPURACION esta definido se ejecuta hasta el siguiente #endif DEPURACION.
        printf("Este mensaje aparece solo si se define depuracion.\n");
    #endif DEPURACION

    printf("Este mensaje sale como otro cualquiera por estar fuera del ifdef.\n");

    #ifdef DEPURACION
        printf("Aqui termina la depuracion.\n");
    #else DEPURACION
     printf("No se ha usado depuracion\n");

    #endif DEPURACION

}///Fin main.
