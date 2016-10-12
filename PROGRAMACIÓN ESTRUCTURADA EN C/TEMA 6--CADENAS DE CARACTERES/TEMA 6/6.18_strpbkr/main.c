#include <stdio.h>
#include <string.h>

int main()
{
    char str[80] = " tio . , l -!";
    char *ptr;

    ptr = str;

    while(ptr != '\0')
    {
        ptr = strpbrk(ptr, ".,-!__?");
        if(ptr != '\0')
            *ptr = ' ';
    }

    printf("%s\n", str);

    return(0);
}


