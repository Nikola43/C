#include <stdio.h>
#include <string.h>

int str_len(char str[]);
void str_concat(char str1[], char str2[]);

int main()
{
    char abc[5] = "abc ";

    char cba[5] = "bca";

    printf("la cadena %s tiene %d caracteres\n", abc, str_len(abc));

    str_concat(abc, cba);

    printf("%s\n", abc);

    return(0);
}


void str_concat(char str1[], char str2[])
{
    int pos, len, i;

    pos = str_len(str1);
    len = str_len(str2);

    for(i=0; i<len; i++)
    {
        str1[pos] = str2[i];
        pos++;
    }

    str1[pos] = '\0';
}

int str_len(char str[])
{
    int counter;

    while(str[counter] != '\0')
        counter++;

  return(counter);
}


/*
char *strconcat(char str1[], char str2[])
{
    int pos, len, i;

    pos = str_len(str1);
    len = str_len(str2);

    for(i=0; i<len; i++)
    {
        str1[pos] = str2[i];
        pos++;
    }

    str1[pos] = '\0';

    return(str1);
}
*/
