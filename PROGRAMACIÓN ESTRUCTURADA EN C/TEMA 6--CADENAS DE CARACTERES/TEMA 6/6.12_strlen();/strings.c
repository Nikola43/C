#include <stdio.h>
#include <ctype.h>
#include <string.h>

int long_tira(char texto[]);

/**Programa principal*/
void main()
{
    char alfa[] = "abcdefghijklmnopqrstuvwxyz";
    scanf("%s", alfa);

    printf("La cadena \"%s\" contiene %d caracteres\n", alfa, strlen(alfa));
    printf("La cadena \"%s\" contiene %d caracteres\n", alfa, long_tira(alfa));

    exit(0);
}/**Fin main*/

int long_tira(char texto[])
{
    int numcar = 0;
    while(texto[numcar] != '\0')
        numcar++;
    return(numcar);
}

