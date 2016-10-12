/**
Desarrollador: Paulo Gustavo Soares Teixeira.

Funcion generaldel programa:
*Conviertir de Binario a Octal, Decimal, Sexagesimal y viceversa.

Prototipo de funciones:
int oct_dec(int i);                       Convierte de octal a decimal.
void recoger_datos();                     Recoge los datos introducidos por el usuario.
int binarioDecimal(char *numBinario);     Convierte de binario a decimal.
void decimal_binario(int n);              Convierte de decimal a binario.
*/

///Incluyendo librerias estandar.
#include <stdio.h>
#include<conio.h>
#include<math.h>

///Definiendo prototipo de funciones.
int oct_dec(int i);
void recoger_datos();
int binarioDecimal(char *numBinario);
void decimal_binario(int n);

///Funcion principal.
void main()
{
    system("title Paulo Converter 1.0");
    system("cls");
    system("color a");
    recoger_datos(); ///Llamada a la funcion de recoger datos.
}///Fin main.

void recoger_datos() ///Funcion que recoge la eleccion del usuario.
{
            system("cls");
            char eleccion_unidad; ///Eleccion de unidad del usuario.
            printf("Bienvenido a Paulo Converter 1.0.\n\n");
            printf("El conversor es capaz de convertir estas unidades:\n\n");
            printf("Pulse la letra en mayusculas correspondiente a la unidad de conversion.\n");
            printf("[A]  Decimal.\n");
            printf("[B]  Binario.\n");
            printf("[C]  Octal.\n");
            printf("[D]  Hexadecimal.\n");
            printf("[E]  Tabla de conversiones.\n");

            printf("Seleccione que unidad desea convertir: ");
            scanf("%c",&eleccion_unidad);

    switch(eleccion_unidad)   ///Switch principal, ejecuta la elecion del tipo de unidad a convertir
    {
        case 'A':  ///Caso A, Unidad Decimal.
        {
            system("color c");
            system("cls");
            int eleccion_decimal;
            printf(".::CONVERTIR DECIMAL::.\n\n");
            printf("Pulse el numero correspondiente al tipo de conversion.\n");
            printf("[1]  Decimal a Binario.\n");
            printf("[2]  Decimal a Octal.\n");
            printf("[3]  Decimal a Hexadecimal.\n");
            printf("Seleccione que desea hacer: ");
            scanf("%i",&eleccion_decimal);

            switch(eleccion_decimal)  ///Switch secundario, ejecuta la eleccion el tipo de conversion dentro de decimal.
            {
                case 1: ///Caso 1, Convertir de Decimal a Binario.
                {
                    system("cls");
                    int num=0;
                    printf("\n.::CONVERTIR DECIMAL A BINARIO::.\n");
                    printf("\nIntroduce un numero: ");
                    scanf("%i",&num); //Pedir variable num
                    printf("\nEl numero introducido en decimal\n");
                    printf("convertido a binario es: ");
                    decimal_binario(num);
                    system("pause>nul");

                }///Fin case 1_Decimal.
                break;

                case 2:  ///Caso 2, Convertir de Decimal a Octal.
                {
                    int n, n2, n3, n4, n5, n6;
                    system("cls");
                    printf("\n.::CONVERTIR DECIMAL A OCTAL::.\n");
                    printf("\nIntroduce un numero: ");
                    scanf("%d",&n);
                    n6 = n % 8;
                    n5 = (n / 8) % 8;
                    n4 = ((n / 8) / 8) % 8;
                    n3 = (((n / 8) / 8) / 8) % 8;
                    n2 = ((((n / 8) / 8) / 8) / 8) % 8;

                    printf("\nEl numero introducido en decimal\n");
                    printf("convertido a octal es: %d%d%d%d%d", n2, n3, n4, n5, n6);
                    system("pause>nul");
                }///Fin case 2_Decimal.
                break;

                case 3:  ///Caso 3, Convertir de Decimal a Hexadecimal.
                {
                    system("cls");
                    int decimal;
                    printf("\n.::CONVERTIR DECIMAL A HEXADECIMAL::.\n");
                    printf("\nIntroduce un numero: ");
                    scanf("%d",&decimal); //Pedir variable num
                    printf("\nEl numero introducido en decimal\n");
                    printf("convertido a hexadecimal es: %x", decimal);
                    system("pause>nul");

                }///Fin case 3_Decimal.
                break;

                default:
                {
                    printf("\nSelecciona una opcion valida la proxima vez.\n");
                    system("pause>nul");
                }///Fin default
                break;
            }///Fin switch eleccion decimal.

        }///Fin case A_Decimal.
        break;

        case 'B':  ///Caso B, Unidad Binario.
        {
            system("color d");
            system("cls");
            int eleccion_binario;
            printf(".::CONVERTIR BINARIO::.\n\n");
            printf("Pulse el numero correspondiente al tipo de conversion.\n");
            printf("[1]  Binario a Decimal.\n");
            printf("[2]  Binario a Octal.\n");
            printf("[3]  Binario a Hexadecimal.\n");
            printf("Seleccione que desea hacer: ");
            scanf("%i",&eleccion_binario);

            switch(eleccion_binario)  ///Switch secundario, ejecuta la eleccion el tipo de conversion dentro de binario.
            {
                case 1:  ///Caso 1, Convertir de Binario a Decimal.
                {
                    system("cls");
                    /*Cadena que almacena el numero binario*/
                    char bin[32];
                    /*Entero que almacena el numero decimal*/
                    int num;
                    printf("\n.::CONVERTIR BINARIO A DECIMAL::.\n");
                    printf("\nIntroduce un numero: ");
                    scanf("%s",bin);
                    /*Se llama a la funcion binarioDecimal*/
                    num=binarioDecimal(bin);
                    /*Si se ha producido un error no se imprime nada*/
                    if(num==-1)
                    printf("\nEl numero introducido en binario\n");
                    printf("convertido a decimal es: %d", num);
                    getchar();
                    system("pause>nul");
                }///Fin case 1_Binario.
                break;

                case 2:  ///Caso 2, Convertir de Binario a Octal.
                {
                    system("cls");
                    /*Cadena que almacena el numero binario*/
                    char bin[32];
                    /*Entero que almacena el numero decimal*/
                    int num;
                    printf("\n.::CONVERTIR BINARIO A OCTAL::.\n");
                    printf("\nIntroduce un numero: ");
                    scanf("%s",bin);
                    num=binarioDecimal(bin);

                    int n, n2, n3, n4, n5, n6;
                    n = num;
                    n6 = n % 8;
                    n5 = (n / 8) % 8;
                    n4 = ((n / 8) / 8) % 8;
                    n3 = (((n / 8) / 8) / 8) % 8;
                    n2 = ((((n / 8) / 8) / 8) / 8) % 8;

                    printf("\nEl numero introducido en binario\n");
                    printf("convertido a octal es: %d%d%d%d%d", n2, n3, n4, n5, n6);
                    system("pause>nul");
                }///Fin case 2_Binario.
                break;

                case 3:  ///Caso 3, Convertir de Binario a hexadecimal.
                {
                    system("cls");
                    /*Cadena que almacena el numero binario*/
                    char bin[32];
                    /*Entero que almacena el numero decimal*/
                    int num;
                    printf("\n.::CONVERTIR BINARIO A HEXADECIMAL::.\n");
                    printf("\nIntroduce un numero: ");
                    scanf("%s",bin);
                    num=binarioDecimal(bin);

                    int decimal;
                    decimal = num;
                    printf("\nEl numero introducido en binario\n");
                    printf("convertido a hexadecimal es: %x", decimal);
                    system("pause>nul");


                }///Fin case 3_Binario.
                break;

                default:
                {
                    printf("\nSelecciona una opcion valida la proxima vez.\n");
                    system("pause>nul");
                }///Fin default

            }///Fin switch eleccion_binario.

        }///Fin case B_Binario.
        break;


        case 'C':  ///Caso C, Unidad Octal.
        {
            system("color e");
            system("cls");
            int eleccion_octal;
            printf(".::CONVERTIR OCTAL::.\n\n");
            printf("Pulse el numero correspondiente al tipo de conversion.\n");
            printf("[1]  Octal a Decimal.\n");
            printf("[2]  Octal a Binario.\n");
            printf("[3]  Octal a Hexadecimal.\n");
            printf("Seleccione que desea hacer: ");
            scanf("%i",&eleccion_octal);

            switch(eleccion_octal)  ///Switch secundario, ejecuta la eleccion el tipo de conversion dentro de Octal.
            {
                case 1:  ///Caso 1, Convertir de Octal a decimal.
                {
                    system("cls");
                    int i;
                    int a;
                    printf("\n.::CONVERTIR OCTAL A DECIMAL::.\n");
                    printf("\nIntroduce un numero: ");
                    scanf("%i",&i); //Pedir variable num
                    a = oct_dec(i);
                    printf("\nEl numero introducido en octal\n");
                    printf("convertido a decimal es: %d", a);
                    system("pause>nul");

                }///Fin case 1_Octal
                break;

                case 2:  ///Caso 2, Convertir Octal a Binario..
                {
                    system("cls");
                    int i;
                    int a;
                    printf("\n.::CONVERTIR OCTAL A BINARIO::.\n");
                    printf("\nIntroduce un numero: ");
                    scanf("%i",&i); //Pedir variable num
                    a = oct_dec(i);

                    int num;
                    num = a;
                    printf("\nEl numero introducido en octal\n");
                    printf("convertido a binario es: ");
                    decimal_binario(num);
                    system("pause>nul");


                }///Fin case 2_Octal
                break;

                case 3:  ///Caso 2, Convertir de Octal a Hexadecimal.
                {
                    system("cls");
                    int i;
                    int a;
                    printf("\n.::CONVERTIR OCTAL A HEXADECIMAL::.\n");
                    printf("\nIntroduce un numero: ");
                    scanf("%i",&i); //Pedir variable num
                    a = oct_dec(i);

                    int decimal;
                    decimal = a;
                    printf("\nEl numero introducido en octal\n");
                    printf("convertido a hexadecimal es: %x", decimal);
                    system("pause>nul");

                }///Fin case 3_Octal
                break;

                default:
                {
                    printf("\nSelecciona una opcion valida la proxima vez.\n");
                    system("pause>nul");
                }///Fin default
                break;

            }///Fin switch eleccion_Octal.

        }///Fin case C_Octal.
        break;

        case 'D': ///Caso D, Unidad Hexadecimal.
        {
            system("color b");
            system("cls");
            int eleccion_hexa;
            printf(".::CONVERTIR HEXADECIMAL::.\n\n");
            printf("Pulse el numero correspondiente al tipo de conversion.\n");
            printf("[1]  Hexadecimal a Decimal.\n");
            printf("[2]  Hexadecimal a Binario.\n");
            printf("[3]  Hexadecimal a Octal.\n");
            printf("Seleccione que desea hacer: ");
            scanf("%i",&eleccion_hexa);

            switch(eleccion_hexa)  ///Switch secundario, ejecuta la eleccion el tipo de conversion dentro de hexadecimal.
            {
                case 1:  ///Caso 1, Convertir de Hexadecimal a Decimal.
                {
                    system("cls");
                    int hexa;
                    printf("\n.::CONVERTIR HEXADECIMAL A DECIMAL::.\n");
                    printf("\nIntroduce un numero: ");
                    scanf("%x",&hexa); //Pedir variable num
                    printf("\nEl numero introducido en hexadecimal\n");
                    printf("convertido a decimal es: %d", hexa);
                    system("pause>nul");

                }///Fin case 1_Hexadecimal.
                break;

                case 2:  ///Caso 2, Convertir de Hexadecimal a Binario.
                {
                    system("cls");
                    unsigned int a;
                    char buffer[33];

                    printf("\n.::CONVERTIR HEXADECIMAL A BINARIO::.\n");
                    printf("\nIntroduce un numero: ");
                    scanf("%x",&a);
                    if(a==0)
                    {
                    putchar('0');
                    }

                    char *cp = buffer + 32;
                    *cp = 0;
                    while(a)
                    {
                    --cp;
                    if(a & 1) *cp = '1';
                    else *cp = '0';
                    a >>= 1;
                    }

                    printf("\nEl numero introducido en hexadecimal\n");
                    printf("convertido a binario es: ");
                    printf(cp);
                    system("pause>nul");
                }///Fin case 2_Hexadecimal.
                break;

                case 3:  ///Caso 3, Convertir de hexadecimal a Octal.
                {
                    system("cls");
                    int i;
                    printf("\n.::CONVERTIR HEXADECIMAL A OCTAL::.\n");
                    printf("\nIntroduce un numero: ");
                    scanf("%x",&i);
                    printf("\nEl numero introducido en hexadecimal\n");
                    printf("convertido a octal es: %o",i);
                    system("pause>nul");
                }///Fin case 3_Hexadecimal.
                break;

                default:
                {
                    printf("\nSelecciona una opcion valida la proxima vez.\n");
                    system("pause>nul");
                }///Fin default
                break;

            }///Fin switch eleccion_hexa.

        }///Fin D_Hexadecimal.
        break;

        case 'E':
        {
            system("color 9");
            system("cls");
            printf(".::Tabla de conversiones::.\n");
            printf("\nDEC.    BIN.    OCT.    HEX.\n");
            printf("0       0       0       0\n");
            printf("1       1       1       1\n");
            printf("2       10      2       2\n");
            printf("3       11      3       3\n");
            printf("4       100     4       4\n");
            printf("5       101     5       5\n");
            printf("6       110     6       6\n");
            printf("7       111     7       7\n");
            printf("8       1000    10      8\n");
            printf("9       1001    11      9\n");
            printf("10      1010    12      A\n");
            printf("11      1011    13      B\n");
            printf("12      1100    14      C\n");
            printf("13      1101    15      D\n");
            printf("14      1110    16      E\n");
            printf("15      1111    17      F\n");
            system("pause>nul");

        }///Fin Case E_Tabla
        break;

        default:
        {
            printf("\nSelecciona una opcion valida la proxima vez.\n");
            system("pause>nul");
            }///Fin default
        break;
    }///Fin switch eleccion_Unidad.
}///Fin funcion recoger_datos

void decimal_binario(int n) ///Funcion que hace el calculo de decimal a binario.
{
    if (n!=0)
    {
        decimal_binario(n/2);
        printf("%i",n%2);
    }///Fin if
}///Fin decimal_binario.

int oct_dec(int i)
{
	int result = 0;
	int n = 0;
	int number = 0;

	if (i < 10)
		return i;

	while (i / 10) {
		number = i % 10;
		result += (number * powl(8, n));
		n++;
		i /= 10;
	}///Fin while
	result += (i * powl(8, n));

	return result;
}///Fin funcion oct_dec.

int binarioDecimal(char *numBinario) ///Convierte de Binario a decimal.
{
int  b , i, n;
int  tamNumBin;
int sumaFinal = 0;
/*tamano de la cadena numBinario*/
tamNumBin = strlen(numBinario) - 1;
for(i = 0; i <= tamNumBin; i++)    { 	b = 1; 	/*Se convierte a numero el caracter seleccionado*/ 	n = (numBinario[i] - '0');  	/*Se verifica que numero que se ha ingresado sea 0 o 1*/ 	if ((n > 1) || (n < 0))
{
/*Se manda un mansaje que advierte que el numero no es binario*/
puts("\n*** No es binario! ***\n");
/*valor de retorno de error*/
return (-1);
}
/*Se convierte a numero decimal*/
b = b<<(tamNumBin-i);
sumaFinal = sumaFinal + n * b;
}///Fin del for
///regresa el valor convertido
return(sumaFinal);
}///Fin de la funcion binarioDecimal
