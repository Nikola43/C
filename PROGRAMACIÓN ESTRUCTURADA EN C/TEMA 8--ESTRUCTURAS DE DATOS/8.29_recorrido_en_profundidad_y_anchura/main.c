#include <stdio.h>
#include <stdlib.h>

typedef struct tnode
{
    int dato;
    struct nodot *hijo_izq;
    struct nodot *hijo_der;
} ARBOL;

typedef struct nodoq
{
    struct nodot *tptr;
    struct nodoq *enlace;
} COLA;

void bfs(ARBOL *ptr);
void dfs(ARBOL *ptr);
void mostrar_cola(COLA *ptr);
int vaciar_cola(COLA *ptr);
void introducir(COLA **ptr, ARBOL *ptro);
void extraer(COLA **ptr, ARBOL **ptro);

int main()
{
    ARBOL *n1, *n2, *n3, *n4, *n5, *n6, *n7, *n8;

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

    printf("Recorrido en profundidad: \n");
    dfs(n1);
    printf("\n");

    printf("Recorrido en anchura: \n");
    bfs(n1);
    printf("\n");

    return(0);
}

void dfs(ARBOL *ptr)
{
    if(ptr != NULL)
    {
        printf("%4d", ptr->dato);
        dfs(ptr->hijo_izq);
        dfs(ptr->hijo_der);
    }
}

void bfs(ARBOL *ptr)
{
    COLA *head = NULL;
    ARBOL *p;

    introducir(&head, ptr);
    while(!vaciar_cola(head))
    {
        extraer(&head, &p);
        printf("%4d", p->dato);
        if(p->hijo_izq != NULL)
            introducir(&head, p->hijo_izq);
        if(p->hijo_der != NULL)
            introducir(&head, p->hijo_der);
    }
}

/*
void mostrar_cola(COLA *ptr)
{
    while(ptr != NULL)
    {
        printf("%c\n", ptr->dato);
        ptr = ptr->link;
    }
    printf("\n");
}
*/

int vaciar_cola(COLA *ptr)
{
    if(ptr == NULL)
        return(1);
    else
        return(0);
}

void introducir(COLA **ptr, ARBOL *ptro)
{
    COLA *p;

    p = malloc(sizeof(COLA));

    if(p != NULL)
    {
        p->tptr = ptro;
        p->enlace = *ptr;
        *ptr = p;
    }
}

void extraer(COLA **ptr, ARBOL **ptro)
{
    COLA *p1, *p2;

    p1 = *ptr;

    if(vaciar_cola(p1))
    {
        printf("\nError: La cola esta vacia\n");
        *ptro = NULL;
    }
    else
    {
        p2 = *ptr;
        while(p2->enlace != NULL)
        {
            p1 = p2;
            p2 = p2->enlace;
        }

        *ptro = p2->tptr;
        p1->enlace = NULL;
        free(p2);

        if(p1 == p2)
            *ptr = NULL;
    }
}
