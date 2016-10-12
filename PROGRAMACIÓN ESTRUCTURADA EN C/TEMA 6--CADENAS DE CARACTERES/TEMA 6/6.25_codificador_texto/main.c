#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    char str[80];
    char codificador[9][9];
    unsigned int r,c,p,n,i;

    printf("Introduzca un texto: ");
    gets(str);

    i = 0;
    for(n = 0; n < strlen(str); n++)
        if(str[n] == ' ')
            i++;

    n = 1 + sqrt(strlen(str) - i);
    for(r = 0; r < 9; r++)
        for(c = 0; c < 9; c++)
            codificador[r][c] = ' ';

    p = 0;
    r = 0;
    c = 0;

    while (str[p] != '\0')
    {
        if(str[p] != ' ')
        {
            codificador[r][c] = str[p];
            r++;
            if(r == n)
            {
                r = 0;
                c++;
            }
        }
        p++;
    }

    printf("string codificada: \n");
    for(r = 0; r < 9; r++)
        for(c = 0; c < 9; c++)
            if(codificador[r][c] != ' ')
                printf("%c", codificador[r][c]);

    return(0);
}
