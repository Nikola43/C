//Inclumimos librerias basicas
#include <stdio.h> //Libreria basica de entrada salida c
#include <conio.h> //Libreria que contiene el metodo getch()

//Definimos las teclas que usara el programa con el codigo asci

#define ESC 27
#define ENTER 13
#define FLECHA_ARRIBA 72
#define FLECHA_ABAJO 80
#define FLECHA_IZQUIERDA 75
#define FLECHA_DERECHA 77

int main()
{
	//Guardaremos la tecla pulsada en un char
    char teclaPulsada;

    printf("Presione cualquier tecla, presione ESCAPE para salir\n\n");

	//Mientras la tecla pulsda no sea escape
    while(teclaPulsada != ESC)
    {
		//leemos la tecla pulsada
        teclaPulsada = getch();
        
        //Imprimimos el codigo de la tecla pulsada
        printf("Codigo tecla: %i Tecla: %c\n", teclaPulsada, teclaPulsada);
    }
    return 0;
}
