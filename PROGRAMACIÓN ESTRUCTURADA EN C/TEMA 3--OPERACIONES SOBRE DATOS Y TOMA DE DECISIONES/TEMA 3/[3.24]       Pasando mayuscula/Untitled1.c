#include <stdio.h>

main()
{
    int n1 = 0x68;
    int n2 = 0x69;

    printf("%c%c.\n", n1, n2);

    n1 &= 0xDF;

    printf("%c%c.\n", n1, n2);

    n2 &= 0xDF;

    printf("%c%c.\n", n1, n2);


}///Fin main.
