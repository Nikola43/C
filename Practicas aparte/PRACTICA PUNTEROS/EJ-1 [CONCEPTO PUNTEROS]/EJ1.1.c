#include <stdio.h>

main()
{
    int i=100;
    int *p1;
    int *p2;
    ///Asignamos las direcciones de memoria a los punteros
    p1 = &i;
    p2 = p1;

    printf("\nLa direccion de i %X\n",&i);
    printf("La direccion a la que apunta p1 %X\n",p1);
    printf("La direccion a la que apunta p2 %X\n\n",p2);

    printf("La direccion de p1 %X\n",&p1);
    printf("La direccion de p2 %X\n\n",&p2);

    printf("Si las direcciones a las que apuntan p1 y p2 son iguales");
    if(p1==p2) /** estamos comparando dos punteros */
        printf("\nEntonces p1 apunta a la misma direccion de memoria que p2\n\n");

    *p1 = *p1 + 2; /** El * tiene más prioridad que el + */

    printf("El valor de i es %d\n", i);

    printf("El valor de *p2 es %d\n", *p2);

    (*p2)++; /** ante la duda de prioridades usamos parentesis */
    printf("El valor de *p1 es %d\n", *p1);

    i += 2;
    printf("El valor de i es %d\n", i);
}
