#include <stdio.h>
#include <stdlib.h>

//Creamos una estructura llamada 'LISTA'
typedef struct nodo
{
    char dato;
    struct nodo *enlace;
} LISTA;

//Funcion para mostrar por pantalla la lista enlazada, toma como argumento un puntero tipo 'LISTA'
void mostrar_lista(LISTA *ptr);

//Funcion para insertal un elemento en la lista, toma como argumento un puntero tipo 'LISTA' y el elemento a ingresar
void insertar(LISTA **ptr, char elemento);

int main()
{
    //Creamos un nodo
    LISTA *n1 = NULL;

    //Creamos una variable tipo char para almacenar el elemento a ingresar
    char elemento;

    //Leemos el elemento por teclado
    do
    {
        printf("\nIntroduce un elemento: ");
        scanf("%c", &elemento);

        //Si el elemento a insertar es distinto de 0, llamamos a la funcion insertar
        if(elemento != '0')
            insertar(&n1, elemento);    //pasamos como argumento la direccion del puntero y el elemento

    }while (elemento != '0');
    //Leemos hasta que el elemento sea 0;

    mostrar_lista(n1);

    free(n1);   //Liberamos la memoria reservada para almacenar el nodo
    return(0);
}

void mostrar_lista(LISTA *ptr)
{
    //Recorremos la lista hasta el final, hasta que el puntero apunta a NULL
    while(ptr != NULL)
    {
        printf("%c\n", ptr->dato);	//Imprimimos la lista, el campo de datos
        ptr = ptr->enlace;		    //asignamos al puntero la direccion de memoria del siguiente nodo
    }
    printf("\n");
}

void insertar(LISTA **ptr, char elemento)
{
    //Creamos dos punteros tipo LISTA
    LISTA *p1, *p2;

    //Asignamos a 'p1' la direccion de memoria de la estructura pasada por argumento
    p1 = *ptr;

    if(p1 == NULL)	//Si la direccion esta vacia
    {
        p1 = malloc(sizeof(LISTA));	//Reservamos memoria para la estructura
        if(p1 != NULL)	            //Si la direccion ya no esta vacia, y asignada la memoria
        {
            p1->dato = elemento;	//Asignamos al puntero la direccion de los datos del elemento
            p1->enlace = NULL;		//Asignamos al campo de enlace NULL, (Fin de lista)
            *ptr = p1;			    //Asignamos la direccion de memoria de 'p1' al primer nodo de la lista
        }
    }
    else //Si la direccion de memoria no esta vacia
    {
        while(p1->enlace != NULL)   //mientras que el el enlace sea distinto a NULL (Este la memoria reservada)
            p1 = p1->enlace;	    //Asignamos al puntero la direccion de enlace del siguiente nodo

        p2 = malloc(sizeof(LISTA)); //reservamos la memoria para almacenar la estructura
        if(p2 != NULL)	            //Si la direccion ya no esta vacia y la memoria asignada
        {
            p2->dato = elemento;    //asignamos el elemento a datos
            p2->enlace = NULL;      //asignamos NULL al enlace del ultimo elemento
            p1->enlace = p2;        //enlazamos el elemento al final de la lista
        }
    }
}
