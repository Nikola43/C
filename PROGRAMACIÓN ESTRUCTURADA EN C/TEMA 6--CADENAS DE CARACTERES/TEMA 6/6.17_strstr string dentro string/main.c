#include <stdio.h>
#include <string.h>

int main()
{
    char str[30] = "que bonito esta el dia el dia soleado me encanta";

    char *ptr;
    int counter = 0;

    ptr = str;

    do
    {
        ptr = strstr(ptr, "el");
        if(ptr != '\0')
        {
            counter++;
            ptr++;
        }
    }while(ptr != '\0');

    printf("la palabra 'el' aparece %d veces\n", counter);

    return(0);
}


