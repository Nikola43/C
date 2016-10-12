#include <stdio.h>
#include <string.h>
#include <ctype.h>>

int main()
{
    char single[] = ";{},=:()[]*?'\"\\¡";
    char doble[] = "*= /= %= += -= || && == != <= >= << >> ++ --"
    char ch, entrada[80], ds[3];
    int pos = 0;

    printf("Introduce una sentencia en C: ");
    gets(entrada);

    while(pos < strlen(entrada))
    {
         do
         {
            ch = entrada[pos];
            pos++;
         }while(ch != ' ');

        if
    }
    return(0);
}
