#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];
    int lchar, rchar, stopped;

    printf("Introduce una frase: ");
    gets(str);

    lchar = 0;
    rchar = strlen(str) - 1;
    stopped = 0;


    while(lchar <= rchar &&!stopped)
    {
        if(str[lchar] != str[rchar])
             stopped = 1;
        lchar++;
        rchar--;
    }

    if(!stopped)
        printf("%s es un palindromo\n", str);
    else
        printf("%s no es un palindromo\n", str);
    return(0);
}
