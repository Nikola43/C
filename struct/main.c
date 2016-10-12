
#include <stdio.h>
#include <string.h>
#include <stdio.h>

char *str1 = "hola";

int main (int argc, char *argv[])
{
      int count;

        printf ("This program was called with \"%s\".\n",argv[0]);

      if (argc > 1)
           for (count = 1; count < argc; count++)
           {
                printf("argv[%d] = %s\n", count, argv[count] );
                if ( 0 == strcmp(str1, argv[count] ))
                    printf("son iguales\n");
                else if (0 <= strcmp(str1, argv[count] ))
                    printf("str1 es mayor\n");
                else
                    printf("str2 es mayor\n");
           }
       else
           printf("The command had no other arguments.\n");


          return 0;
}
