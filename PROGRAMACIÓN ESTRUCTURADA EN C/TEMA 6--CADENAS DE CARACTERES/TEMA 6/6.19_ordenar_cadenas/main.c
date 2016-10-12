#include <stdio.h>
#include <string.h>

#define NUM_NAMES 6
#define NUM_CHARS 10

int main()
{
    char name[NUM_NAMES][NUM_CHARS] =
    {
        {'p','a','u','l','o'},
        {'p','a','c','o'},
        {'c','a','r','m','e','n'},
        {'i','s','a'},
        {"eduardo"},
        {"manuel"}
    };

    char aux_name[NUM_CHARS];
    int i,j;

    printf("Lista original: \n");
    for(i=0; i<NUM_NAMES; i++)
        printf("Nombres: %s\n", name[i]);

    for(i=0; i < NUM_NAMES - 1; i++)
        for(j = i + 1; j < NUM_NAMES; j++)
            if(strcmp(name[i], name[j]) > 0)
            {
                strcpy(aux_name, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], aux_name);
            }

    printf("\nLista ordenada: \n");
    for(i=0; i<NUM_NAMES; i++)
        printf("Nombres: %s\n", name[i]);



    return(0);
}
