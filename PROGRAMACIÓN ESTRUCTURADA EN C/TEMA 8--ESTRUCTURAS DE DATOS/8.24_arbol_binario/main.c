#include <stdio.h>
#include <stdlib.h>

typedef struct nodo
{
    char dato;
    struct nodo *hijo_izq;
    struct nodo *hijo_der;
} ARBOL;

void preOrden(ARBOL *ptr);
void ordenSimetrico(ARBOL *ptr);
void postOrden(ARBOL *ptr);

int main()
{
    ARBOL *n1, *n2, *n3, *n4, *n5;

    n1 = malloc(sizeof(ARBOL));
    n2 = malloc(sizeof(ARBOL));
    n3 = malloc(sizeof(ARBOL));
    n4 = malloc(sizeof(ARBOL));
    n5 = malloc(sizeof(ARBOL));

    n1->dato = '1';
    n1->hijo_izq = n2;
    n1->hijo_der = n3;

    n2->dato = '2';
    n2->hijo_izq = n4;
    n2->hijo_der = n5;

    n3->dato = '3';
    n3->hijo_izq = NULL;
    n3->hijo_der = NULL;

    n4->dato = '4';
    n4->hijo_izq = NULL;
    n4->hijo_der = NULL;

    n5->dato = '5';
    n5->hijo_izq = NULL;
    n5->hijo_der = NULL;

    printf("\nRecorrido en preOden\n");
    preOrden(n1);

    printf("\nRecorrido en ordenSimetrico\n");
    ordenSimetrico(n1);

    printf("\nRecorrido en postOden\n");
    postOrden(n1);

    printf("\n");

    return(0);
}

void preOrden(ARBOL *ptr)
{
    if(ptr != NULL)
    {
        printf("%c", ptr->dato);
        preOrden(ptr->hijo_izq);
        preOrden(ptr->hijo_der);
    }
}

void ordenSimetrico(ARBOL *ptr)
{
    if(ptr != NULL)
    {
        ordenSimetrico(ptr->hijo_izq);
        printf("%c", ptr->dato);
        ordenSimetrico(ptr->hijo_der);
    }
}

void postOrden(ARBOL *ptr)
{
    if(ptr != NULL)
    {
        postOrden(ptr->hijo_izq);
        postOrden(ptr->hijo_der);
        printf("%c", ptr->dato);
    }
}
