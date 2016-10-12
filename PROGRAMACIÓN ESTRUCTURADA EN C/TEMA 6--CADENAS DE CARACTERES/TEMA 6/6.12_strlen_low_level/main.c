#include <stdio.h>
#include <string.h>

int len(char str[]);

int main()
{
    char abc[30] = "abcdefghijklmnopqrstuvwxyz";

    printf("la cadena %s tiene %d caracteres\n", abc, len(abc));

    return(0);
}

int len(char str[])
{
    int counter;

    while(str[counter] != '\0')
        counter++;

  return(counter);
}
