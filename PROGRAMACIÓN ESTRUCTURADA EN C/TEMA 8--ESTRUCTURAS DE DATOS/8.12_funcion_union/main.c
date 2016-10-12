#include <stdio.h>
#include <stdlib.h>

int main()
{
    union
    {
        int   valor_int;
        float valor_float;

    } intORfloat;

    printf("Tamaño union %d\n", sizeof(intORfloat));

    intORfloat.valor_int = 332;
    intORfloat.valor_float = 1.23;

    printf("%d\n%f\n", intORfloat.valor_int, intORfloat.valor_float);
    printf("%X\n%X\n", &intORfloat.valor_int, &intORfloat.valor_float);

    return(0);
}
