#include <stdio.h>

#define NRM  "\x1B[0;"
#define BLK  "\x1B[30;"
#define RED  "\x1B[31;"
#define GRN  "\x1B[32;"
#define YEL  "\x1B[33;"
#define BLU  "\x1B[34;"
#define MAG  "\x1B[35;"
#define CYN  "\x1B[36;"
#define WHT  "\x1B[37;"

#define NORMAL    "0m"
#define NEGRITA   "1m"
#define OSCURO    "2m"
#define SUBRAYADO "4m"
#define PARPADEO  "5m"
#define CONTRASTE "7m"
#define OCULTO    "8m"


int main()
{
        printf("%s%sred\n", RED, NEGRITA);
	    printf("%s%sgreen\n", GRN, SUBRAYADO);
        printf("%syellow\n", YEL);
		printf("%sblue\n", BLU);
		printf("%smagenta\n", MAG);
		printf("%scyan\n", CYN);
		printf("%swhite\n", WHT);
		printf("%snormal\n", NRM);
        printf("\033[01;34mHello World\033[0m");


        return 0;
}
