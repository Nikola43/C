#include <stdio.h>

int euclid(int a, int b);

main()
{
    int m; ///Primer numero.
    int n; ///Segundo numero.

    printf("Introduce el primero numero: ");
    scanf("%i",&m);
    printf("Introduce el segundo numero: ");
    scanf("%i",&n);

    printf("El MCD de %i y %i es %i",m,n,euclid(m,n));
}///Fin main.

int euclid(int a, int b)
{
    if (b == 0)
        return a;
    else
        return euclid(b,a%b);

}///Fin euclid.
