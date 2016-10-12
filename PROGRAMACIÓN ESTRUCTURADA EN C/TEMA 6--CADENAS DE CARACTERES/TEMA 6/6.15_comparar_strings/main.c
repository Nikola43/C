#include <stdio.h>
#include <string.h>

void cmp(char str1[], char str2[]);

int main()
{
    char strA[10] = "hola";
    char strB[10] = "adios";
    char strC[10] = "adew";

    char s1[4] = "abc";
    char s2[4] = "abc";

    char c1 = 'c';
    char c2 = 'd';

    cmp(strA, strB);
    cmp(strB, strC);
    cmp(strA, strC);

    cmp(s1, s2);

    return(0);
}

void cmp(char str1[], char str2[])
{
    int val;

    val = strcmp(str1, str2);

    if(val == 0)
        printf("%s == %s\n", str1, str2);
    else if(val < 0)
        printf("%s < %s\n", str1, str2);
    else
        printf("%s > %s\n", str1, str2);
}


