#include <stdio.h>
#define V 1
#define F 0

///Prototipo de funciones
void depuracion(int activa, int muestra, int pasoapaso);

main()
{
    int contador;
    contador = 0;
    while(contador != 9)
    {
        contador += 2;
        depuracion(V, contador, V);
    }
}

void depuracion(int activa, int muestra, int pasoapaso)
{
    char c;

    if(activa == V)
    {
        printf("%d",muestra);
        if(pasoapaso == V)
           scanf("%c",&c);
    }
}
