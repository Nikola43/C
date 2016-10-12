#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TRUE  1
#define FALSE 0

typedef struct nodo
{
    char dato;
    struct nodo *link;
} PILA;

void mostrar_pila(PILA *ptr);
int vaciar_pila(PILA *ptr);
void introducir(PILA **ptr, char item);
void extraer(PILA **ptr, char *item);

int main()
{
    PILA *pila = NULL;
    char cadena[40];
    unsigned int i;

    printf("Introduzca una cadena: ");
    gets(cadena);

    for(i=0; i < strlen(cadena); i++)
        introducir(&pila, cadena[i]);

    printf("La pila es: \n");
    mostrar_pila(pila);

    i=0;

    while(!vaciar_pila(pila))
    {
        extraer(&pila, &cadena[i]);
        i++;
    }

    printf("La nueva cadena es: %s\n", cadena);



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
