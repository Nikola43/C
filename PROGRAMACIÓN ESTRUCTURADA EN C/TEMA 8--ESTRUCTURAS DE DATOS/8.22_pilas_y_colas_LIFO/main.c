#include <stdio.h>
#include <stdlib.h>

typedef struct nodo
{
    char dato;
    struct nodo *link;
} PILA;

void mostrar_pila(PILA *ptr);
int  vaciar_pila(PILA *ptr);
void introducir(PILA **ptr, char item);
void extraer(PILA **ptr, char *item);

int main()
{
    PILA *pila = NULL;
    char item;

    introducir(&pila, '1');
    introducir(&pila, '2');
    introducir(&pila, '3');

    printf("La pila: \n");
    mostrar_pila(pila);

    extraer(&pila, &item);
    printf("El primer elemento es: %c\n", item);

    extraer(&pila, &item);
    printf("\nEl segundo elemento es: %c\n", item);

    extraer(&pila, &item);
    printf("\nEl tercer elemento es: %c\n", item);

    printf("\nSi extraemos un elemento mas...");
    extraer(&pila, &item);

    return(0);
}

void mostrar_pila(PILA *ptr)
{
    while(ptr != NULL)
    {
        printf("%c\n", ptr->dato);
        ptr = ptr->link;
    }
    printf("\n");
}

int vaciar_pila(PILA *ptr)
{
    if(ptr == NULL)
        return(1);
    else
        return(0);
}

void introducir(PILA **ptr, char item)
{
    PILA *p;

    if(vaciar_pila(*ptr))
    {
        p = malloc(sizeof(PILA));
        if(p != NULL)
        {
            p->dato = item;
            p->link = NULL;
            *ptr = p;
        }
    }
    else
    {
        p = malloc(sizeof(PILA));
        if(p != NULL)
        {
            p->dato = item;
            p->link = *ptr;
            *ptr = p;
        }
    }
}

void extraer(PILA **ptr, char *item)
{
    PILA *p1;

    p1 = *ptr;

    if(vaciar_pila(p1))
    {
        printf("\nError: La pila esta vacia\n");
        *item = '\0';
    }
    else
    {
        *item = p1->dato;
        *ptr = p1->link;
        free(p1);
    }
}
