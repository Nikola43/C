#include <stdio.h>
#include <stdlib.h>

typedef struct nodo
{
    char dato;
    struct nodo *link;
} LISTA;

void mostrar_lista(LISTA *ptr);
void insertar_principio(LISTA **ptr, char item);
void insertar_final(LISTA *ptr, char item);

int main()
{
    LISTA *n1, *n2, *n3;

    n1 = malloc(sizeof(LISTA));
    n2 = malloc(sizeof(LISTA));
    n3 = malloc(sizeof(LISTA));

    n1->dato = 'a';
    n1->link = n2;

    n2->dato = 'b';
    n2->link = n3;

    n3->dato = 'c';
    n3->link = NULL;

    printf("La lista enlazada: \n");
    mostrar_lista(n1);

    insertar_principio(&n1, 's');
    printf("La nueva lista enlazada: \n");
    mostrar_lista(n1);

    insertar_final(n1, 'm');
    printf("La nueva lista enlazada: \n");
    mostrar_lista(n1);

    return(0);
}

void mostrar_lista(LISTA *ptr)
{
    while(ptr != NULL)
    {
        printf("%c", ptr->dato);
        ptr = ptr->link;
    }
    printf("\n");
}

void insertar_principio(LISTA **ptr, char item)
{
    LISTA *n;

    n = malloc(sizeof(LISTA));
    if(n != NULL)
    {
        n->dato = item;
        n->link = *ptr;
        *ptr = n;
    }
}

void insertar_final(LISTA *ptr, char item)
{
    LISTA *n;

    while(ptr->link != NULL)
        ptr = ptr->link;

    n = malloc(sizeof(LISTA));
    if(n != NULL)
    {
        ptr->link = n;
        n->dato = item;
        n->link = NULL;
    }
}
