#include <stdio.h>
#include <stdlib.h>

typedef struct nodo
{
    char dato;
    struct nodo *hijo_izq;
    struct nodo *hijo_der;
} ARBOL;

int numero_nodos = 0;
void contar_nodos(ARBOL *ptr);

int main()
{
    ARBOL *n1, *n2, *n3, *n4, *n5;

    n1 = malloc(sizeof(ARBOL));
    n2 = malloc(sizeof(ARBOL));
    n3 = malloc(sizeof(ARBOL));
    n4 = malloc(sizeof(ARBOL));
    n5 = malloc(sizeof(ARBOL));

    n1->dato = '*';
    n1->hijo_izq = n2;
    n1->hijo_der = n3;

    n2->dato = '+';
    n2->hijo_izq = n4;
    n2->hijo_der = n5;

    n3->dato = 'C';
    n3->hijo_izq = NULL;
    n3->hijo_der = NULL;

    n4->dato = 'A';
    n4->hijo_izq = NULL;
    n4->hijo_der = NULL;

    n5->dato = 'B';
    n5->hijo_izq = NULL;
    n5->hijo_der = NULL;

    printf("Numero total de nodo: ");
    contar_nodos(n1);
    printf("%d\n", numero_nodos++);

    return(0);
}

void contar_nodos(ARBOL *ptr)
{
    if(ptr != NULL)
    {
        numero_nodos++;
        contar_nodos(ptr->hijo_izq);
        contar_nodos(ptr->hijo_der);
    }
}
