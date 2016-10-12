#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	FILE *fp;
	fp = fopen ( "trabajador.txt", "wt" );
	if (fp==NULL)
    {
        fputs ("File error",stderr); exit (1);
    }

	fclose ( fp );
	return 0;
}
