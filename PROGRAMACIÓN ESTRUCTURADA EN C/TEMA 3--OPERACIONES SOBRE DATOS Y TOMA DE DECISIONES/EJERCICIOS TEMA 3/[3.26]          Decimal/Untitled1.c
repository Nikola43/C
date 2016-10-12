#include <stdio.h>

main()
{
    char bit1;
    char bit2;

    bit1 = 5;
    bit2 = 10;

    printf("%X\n", bit1&bit2);
    printf("%X\n", bit1%bit2);
    printf("%X\n", bit1=bit2);
    printf("%X\n", ~bit2);
}
