#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TRUE  1
#define FALSE 0

typedef struct nodo
{
    int dato;
    struct nodo *hijo_izq;
    struct nodo *hijo_der;
} ARBOL;

int busqueda_binaria(ARBOL *ptr, int elemento);

int main()
{
    ARBOL *n1, *n2, *n3, *n4, *n5, *n6, *n7, *n8;
    int valor, encontrado;

    n1 = malloc(sizeof(ARBOL));
    n2 = malloc(sizeof(ARBOL));
    n3 = malloc(sizeof(ARBOL));
    n4 = malloc(sizeof(ARBOL));
    n5 = malloc(sizeof(ARBOL));
    n6 = malloc(sizeof(ARBOL));
    n7 = malloc(sizeof(ARBOL));
    n8 = malloc(sizeof(ARBOL));

    n1->dato = 7;
    n1->hijo_izq = n2;
    n1->hijo_der = n3;

    n2->dato = 5;
    n2->hijo_izq = n4;
    n2->hijo_der = n5;

    n3->dato = 13;
    n3->hijo_izq = n6;
    n3->hijo_der = n7;

    n4->dato = 3;
    n4->hijo_izq = n8;
    n4->hijo_der = NULL;

    n5->dato = 6;
    n5->hijo_izq = NULL;
    n5->hijo_der = NULL;

    n6->dato = 12;
    n6->hijo_izq = NULL;
    n6->hijo_der = NULL;

    n7->dato = 17;
    n7->hijo_izq = NULL;
    n7->hijo_der = NULL;

    n8->dato = 2;
    n8->hijo_izq = NULL;
    n8->hijo_der = NULL;

    printf("Introduzca el valor a buscar: ");
    scanf("%d", &valor);

    encontrado = busqueda_binaria(n1, valor);
    printf("El valor %d", valor);
    encontrado ? printf(" ha ") : printf(" no ha ");
    printf("sido encontrado en el arbol binario\n");

    return(0);
}

int busqueda_binaria(ARBOL *ptr, int elemento)
{
    if(ptr == NULL)
        return(FALSE);
    else
        if(ptr->dato == elemento)
            return(TRUE);
        else
            if(elemento < ptr->dato)
                busqueda_binaria(ptr->hijo_izq, elemento);
            else
                busqueda_binaria(ptr->hijo_der, elemento);
}
