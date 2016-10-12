#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];
    int i;
    int counter;

    printf("Introduce una frase: ");
    gets(str);
    while(str[i] != '\0')
    {
        switch (str[i])
        {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
                counter++;
                break;

            default:
            break;
        }
        i++;
    }

    printf("hay %d vocales\n", counter);

    return(0);
}
