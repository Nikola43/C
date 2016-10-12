#include <stdio.h>

void main()
{
    int vector[3];
    int *ptr;

    vector[0] = 10;
    vector[1] = 20;
    vector[2] = 30;

    printf("&vector = %d\n", vector[0]);
    printf("&vector = %d\n", vector[1]);
    printf("&vector = %d\n", vector[2]);

    ptr = vector;

    printf("&vector = %d\n", *ptr);
    printf("&vector = %d\n", *(ptr + 1));
    printf("&vector = %d\n", *(ptr + 2));
}
