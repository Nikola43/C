#include <stdio.h>
#include <stdlib.h>

typedef struct nodo
{
    char dato;
    struct nodo *link;
} LISTA;

void mostrar_lista(LISTA *ptr);
int buscar_item(LISTA *ptr, char item);

int main()
{
    LISTA *n1, *n2, *n3, *n4;
    char item;
    int encontrado;

    n1 = malloc(sizeof(LISTA));
    n2 = malloc(sizeof(LISTA));
    n3 = malloc(sizeof(LISTA));
    n4 = malloc(sizeof(LISTA));

    n1->dato = 'a';
    n1->link = n2;

    n2->dato = 'b';
    n2->link = n3;

    n3->dato = 'c';
    n3->link = n4;

    n4->dato = 'd';
    n4->link = NULL;

    printf("La lista enlazada: \n");
    mostrar_lista(n1);

    printf("Introduza un caracter a buscar en lista: ");
    item = getchar();

    encontrado = buscar_item(n1, item);

    printf("el caracter '%c' ", item);
    if(encontrado == 1)
        printf("se ha encontrado\n");
    else
        printf("no se ha encontrado\n");

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

int buscar_item(LISTA *ptr, char item)
{
    if(ptr == NULL)
        return(0);
    else
    {
        do
        {
            if(ptr->dato == item)
                return(1);
            ptr = ptr->link;
        } while(ptr != NULL);
        return(0);
    }
}
