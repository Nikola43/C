#include <stdio.h>
#include <stdlib.h>

typedef struct elemento
{
    char dato;
    struct elemento *enlace;
} LISTA;

void mostrarLista(LISTA *nodo);
int  buscarItem(LISTA *nodo, char item);
void insertarPrincipio(LISTA **nodo, char item);
void insertarFinal(LISTA *nodo, char item);
void borrarPrincipio(LISTA **nodo);
void borrarFinal(LISTA **nodo);

int main(void)
{
    LISTA *canciones;

    insertarPrincipio(&canciones, 'a');
    insertarPrincipio(&canciones, 'b');
    insertarPrincipio(&canciones, 'c');
    mostrarLista(canciones);
    return 0;
}

void mostrarLista(LISTA *nodo)
{
    while(nodo != NULL)           //Se repite hasta que llegue al ultimo nodo
    {
        printf("%c", nodo->dato); //Imprimimos los datos
        nodo = nodo->enlace;      //Item apunta al enlace del siguiente item
    }
    printf("\n");
}

int buscarItem(LISTA *nodo, char item)
{
    if(nodo == NULL) //Si el nodo esta vacio
        return(0);   //Se devuelve un 0
    else
    {
        do
        {
            if(nodo->dato == item) //Si el nodo es igual al item a buscar
                return(1);         //Se devuelve un 1 indicando que se ha encontrado el item de la busqueda

            nodo = nodo->enlace;
        } while(nodo != NULL);     //Se repite hasta que llegue al ultimo nodo
    }
    return(0);
}

void insertarPrincipio(LISTA **nodo, char item)
{
    LISTA *n;

    n = malloc(sizeof(LISTA));
    if(n != NULL)
    {
        n->dato = item;
        n->enlace = *nodo;
        *nodo = n;
    }
}

void insertarFinal(LISTA *nodo, char item)
{
    LISTA *n;

    while(nodo->enlace != NULL)
        nodo = nodo->enlace;

    n = malloc(sizeof(LISTA));
    if(n != NULL)
    {
        nodo->enlace = n;
        n->dato = item;
        n->enlace = NULL;
    }
}

void borrarPrincipio(LISTA **nodo)
{
    LISTA *p;

    p = *nodo;
    if(p != NULL)
    {
        p = p->enlace;
        free(*nodo);
    }
    *nodo = p;
}

void borrarFinal(LISTA **nodo)
{
    LISTA *p1, *p2;

    p1 = *nodo;
    if(p1 != NULL)
    {
        if(p1->enlace == NULL)
        {
            free(*nodo);
            *nodo = NULL;
        }
        else
        {
            while(p1->enlace != NULL)
            {
                p2 = p1;
                p1 = p1->enlace;
            }
            p2->enlace = NULL;
            free(p1);
        }
    }
}
