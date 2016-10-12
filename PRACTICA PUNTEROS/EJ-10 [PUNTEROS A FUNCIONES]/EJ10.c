#include <stdio.h>
#include <stdlib.h>

int *f1();

void main()
{
    int *ptr;
    ptr = f1();
    printf("%d\n", *ptr);
}

int *f1()
{
    return(5);
}
