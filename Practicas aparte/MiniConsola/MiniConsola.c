///Incluyendo librerias.
#include <stdio.h>
#include <string.h>
#define cls system("cls")
#define pause system("pause>nul")

const char echoDef[] = "echo";
const char clearScreenDef[] = "clearScreen";

void echo(char comando[]);
void clearScreen(char comando[]);
int errorStatus = 0;

void main()
{
    while(1)
    {
    char command[80] = "";
    printf("Introduce un comando: ");
    gets(command);
    }

}

void clearScreen(char comando[])
{
    int i = 0;
    while(clearScreenDef[i] != '\0')
    {
        if(comando[i] != clearScreenDef[i])
        {
            errorStatus = 1;
        }
        i++;
    }
    system("cls");
}


void echo(char comando[])
{
    int i=0; int j=0;
    char mensaje[80] = "";
    while(comando[i] != '\0')
    {
        while(echoDef[j] != '\0')
        {
            if(comando[j] != echoDef[j])
            {
                errorStatus = 1;
            }
            j++;
        }

    mensaje[i] = comando[(i+1+j)];
    i++;
    }

    if(errorStatus == 0)
        printf("%s\n\n",mensaje);
    else
        printf("Error!, Comando \"%s\" no reconocido.\n\n", comando);
    pause;
}
