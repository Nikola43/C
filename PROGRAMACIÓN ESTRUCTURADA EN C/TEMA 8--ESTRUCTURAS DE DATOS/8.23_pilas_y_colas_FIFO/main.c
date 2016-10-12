#include <stdio.h>
#include <stdlib.h>

typedef struct nodo
{
    char dato;
    struct nodo *link;
} COLA;

void mostrar_cola(COLA *ptr);
int  vaciar_cola(COLA *ptr);
void introducir(COLA **ptr, char item);
void extraer(COLA **ptr, char *item);

int main()
{
    COLA *cola = NULL;
    char item;

    introducir(&cola, '1');
    introducir(&cola, '2');
    introducir(&cola, '3');

    printf("La pila: \n");
    mostrar_cola(cola);

    extraer(&cola, &item);
    printf("El primer elemento es: %c\n", item);

    extraer(&cola, &item);
    printf("\nEl segundo elemento es: %c\n", item);

    extraer(&cola, &item);
    printf("\nEl tercer elemento es: %c\n", item);

    printf("\nSi extraemos un elemento mas...");
    extraer(&cola, &item);

    return(0);
}

void mostrar_cola(COLA *ptr)
{
    while(ptr != NULL)
    {
        printf("%c\n", ptr->dato);
        ptr = ptr->link;
    }
    printf("\n");
}

int vaciar_cola(COLA *ptr)
{
    if(ptr == NULL)
        return(1);
    else
        return(0);
}

void introducir(COLA **ptr, char item)
{
    COLA *p;

    p = malloc(sizeof(COLA));

    if(p != NULL)
    {
        p->dato = item;
        p->link = *ptr;
        *ptr = p;
    }
}

void extraer(COLA **ptr, char *item)
{
    COLA *p1, *p2;

    p1 = *ptr;

    if(vaciar_cola(p1))
    {
        printf("\nError: La cola esta vacia\n");
        *item = '\0';
    }
    else
    {
        p2 = *ptr;
        while(p2->link != NULL)
        {
            p1 = p2;
            p2 = p2->link;
        }

        *item = p2->dato;
        p1->link = NULL;
        free(p2);

        if(p1 == p2)
            *ptr = NULL;
    }
}
