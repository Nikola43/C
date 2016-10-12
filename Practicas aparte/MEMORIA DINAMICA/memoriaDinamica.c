#include <stdio.h>

void printVal(int *val);

int main()
{
    int x = 5;
          ///malloc() devuelve un puntero a la direccion de memoria donde se almacenan los bytes requeridos
    int *y = malloc(sizeof(int));

    *y = 6;
    printf("%i, %i\n", *y, sizeof(char));
    printVal(y);
    free(y);
    printVal(y);
    return(0);
}

void printVal(int *val)
{
    printf("%i\n", *val);
}
