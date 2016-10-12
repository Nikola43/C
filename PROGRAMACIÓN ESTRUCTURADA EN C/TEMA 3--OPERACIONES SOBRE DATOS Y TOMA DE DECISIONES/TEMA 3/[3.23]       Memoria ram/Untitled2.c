#include <stdio.h>

float Cacher(void);
float RAMer(void);

main()
{
    char eleccion;   ///Eleccion del usuario.
    float Tacc; ///Tiempo de acceso en nanasegundos.

    printf("Que desea calcular?\n");
    printf("A] Tiempo medio de acceso a la cache.\n");
    printf("B] Tiempo de acceso a la RAM entrelazada.\n");
    printf("Eleccion: ");
    scanf("%c",&eleccion);

    switch(eleccion)
    {
        case 'A' : Tacc = Cacher(); break;
        case 'B' : Tacc = RAMer(); break;
        default : printf("Elige una opcion valida.\n");

    }///Fin switch.

    if((eleccion == 'A')||(eleccion == 'B'))
        printf("El tiempo en nanosegundos es %f.\n",Tacc);
}///Fin main.

float Cacher()
{
    float tac;  ///Tiempo de acceso a la cache.
    float ram;  /// Tiempo de acceso a la ram.
    float hit;  ///Tasa de aciertos.

    printf("Introduce el tiempo de acceso a la cache en nanosegundos: ");
    scanf("%f",&tac);
    printf("Introduce el tiempo de acceso a la ram en nanosegundos: ");
    scanf("%f",&ram);
    printf("Introduce la tasa de aciertos: ");
    scanf("%f",&hit);

    return((hit* tac)+(1.0 - hit)*(tac+ram));
}///Fin cacher.

float RAMer()
{
    float n;
    float ram;

    printf("introduce el numero de modulos de ram: ");
    scanf("%f",&n);
    printf("introduce el tiempo de acceso a la ram: ");
    scanf("%f",&ram);

    return(ram / n);
}///Fin RAMer.
