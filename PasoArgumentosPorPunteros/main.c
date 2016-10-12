#include <stdio.h>
#include <stdlib.h>

void print_string(char *str[]);

int main(void)
{
    char *a = "a";

    print_string(&a[0]);

    printf("%s\n", a);

    return 0;
}

void print_string(char *str[])
{
    *str = "Hola";
    printf("%s\n", *str);
}
