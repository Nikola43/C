#include <stdio.h>
#include <stdlib.h>

//Creamos una estructura llamada 'struct1'
typedef struct
{
    char nombre[20];
    char ape1[20];
    int  telefono;
} struct1;

typedef struct
{
    char nombre[20];
    char ape1[20];
    int  telefono;
    struct1 fabricante;
} struct2;

//Creamos una estructura llamada 'struct2'
typedef struct
{
    struct2 compania;         // 'struct1' es un miembro de struc2
    int     segundo_miembro_2;
    char    segundo_miembro_3;
} struct3;

int main()
{

    struct3 objeto; //Creamos una variable 'objeto' tipo 'struct2'

    //Entrada de datos
    printf("Introduce el nombre: ");
    gets(objeto.compania.fabricante.nombre);     //accedemos a 'struct1' mediante 'struct2'

    printf("Introduce el apellido: ");
    gets(objeto.compania.fabricante.ape1);

    printf("Introduce el telefono: ");
    scanf("%d", &objeto.compania.fabricante.telefono);

    printf("%s\n%s\n%d\n", objeto.compania.fabricante.nombre, objeto.compania.fabricante.ape1, objeto.compania.fabricante.telefono);
    return(0);
}
