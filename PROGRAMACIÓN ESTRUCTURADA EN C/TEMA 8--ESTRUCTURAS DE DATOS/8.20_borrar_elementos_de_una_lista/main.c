#include <stdio.h>
#include <stdlib.h>

typedef struct nodo
{
    char dato;
    struct nodo *link;
} LISTA;

void mostrar_lista(LISTA *ptr);
void borrar_principio(LISTA **ptr);
void borrar_final(LISTA **ptr);

int main()
{
    LISTA *n1, *n2, *n3, *n4;

    n1 = malloc(sizeof(LISTA));
    n2 = malloc(sizeof(LISTA));
    n3 = malloc(sizeof(LISTA));
    n4 = malloc(sizeof(LISTA));

    n1->dato = '1';
    n1->link = n2;

    n2->dato = '2';
    n2->link = n3;

    n3->dato = '3';
    n3->link = n4;

    n4->dato = '4';
    n4->link = NULL;

    printf("La lista enlazada: \n");
    mostrar_lista(n1);


    borrar_principio(&n1);
    printf("borramos el primero nodo: \n");
    mostrar_lista(n1);

    borrar_final(&n1);
    printf("borramos el ultimo nodo: \n");
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

void borrar_principio(LISTA **ptr)
{
    LISTA *p;

    p = *ptr;
    if(p != NULL)
    {
        p = p->link;
        free(*ptr);
    }
    *ptr = p;
}

void borrar_final(LISTA **ptr)
{
    LISTA *p1, *p2;

    p1 = *ptr;
    if(p1 != NULL)
    {
        if(p1->link == NULL)
        {
            free(*ptr);
            *ptr = NULL;
        }
        else
        {
            while(p1->link != NULL)
            {
                p2 = p1;
                p1 = p1->link;
            }
            p2->link = NULL;
            free(p1);
        }
    }
}
