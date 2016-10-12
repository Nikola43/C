#include <stdio.h>
#include <string.h>

#define NUM_NAMES 6
#define NUM_CHARS 10

int main()
{
    char code[10] = "123456789";
    int total = 0;
    int i, rem;



    for(i = 0; i < 9; i++)
        total += (code[i] - 0x30) * (i + 1);

    rem = total % 11;

    printf("El ultimo caracter deberia ser: ");
    if(rem != 10)
        printf("%c", (rem + 0x30));
    else
        printf("X\n");
    return(0);
}
