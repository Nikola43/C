///Variables static
#include <stdio.h>

void main()
{
    ///Son variables que se guardan en el registro, de acceso rapido, si no hay memoria en el registro lo pasa a la ram
    register counter = 0;

    for(counter=0;counter<100;counter++)
        printf("%d\n",counter);
}
