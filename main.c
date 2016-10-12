#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_CAMPOS 16

void ingresar_empleado();
void mostrarDatos();
void grabarDatos();
void limpiarDatos();

char apellidos[20] = {0};
char nombre[20] = {0};
char dni[20] = {0};
char nacimiento[20] = {0};
char sexo[20] = {0};
char antiguedad[20] = {0};
char categoria[20] = {0};
char puesto[20] = {0};
char departamento[20] = {0};
char contrato[20] = {0};
char social[20] = {0};
char observaciones[20] = {0};
char sanciones[20] = {0};

char centro[20] = {0};
char horas_t[20] = {0};
char horas_r[20] = {0};


char *datosTrabajador[16] = {apellidos, nombre, dni, nacimiento, sexo, antiguedad, categoria, puesto, departamento, contrato,
                          social, observaciones, sanciones, centro, horas_t, horas_r};

char *pedir_datos[16] = {"Apellidos: ", "Nombre: ", "DNI: ", "Fecha de nacimiento: ", "Sexo: ", "Antigüedad: ", "Categoria: ",
                             "Puesto de trabajo: ", "Departamento: ", "Contrato: ", "Nº Seguridad Social: ", "Observaciones: ",
                             "Sanciones: ", "Centro de trabajo: ", "Horas teoricas de trabajo: ", "Horas reales de trabajo: "};

int main()
{
    ingresar_empleado();
    mostrarDatos();
    grabarDatos();
    limpiarDatos();
    return 0;
}

void grabarDatos()
{
 	FILE *fp;
 	char formato[5] = ".txt";
    char *nombre_archivo = datosTrabajador[1];

 	strcat(nombre, formato);

 	fp = fopen(nombre_archivo, "wt" );

    int i = 0;
    for(i=0;i<NUM_CAMPOS;i++)
    {
        fputs(pedir_datos[i], fp );
        fputs(datosTrabajador[i], fp );
        fputs("\n", fp);
    }

 	fclose ( fp );
}

void ingresar_empleado()
{

    int i = 0;
    for(i=0;i<NUM_CAMPOS;i++)
    {
        printf("%s", pedir_datos[i]);
        scanf("%s",  datosTrabajador[i]);
        printf("\n");
    }
}

void mostrarDatos()
{
    int i = 0;
    for(i=0;i<NUM_CAMPOS;i++)
    {
        printf("%s", pedir_datos[i]);
        printf("%s\n", datosTrabajador[i]);
    }
}

void limpiarDatos()
{
    int i = 0;
    for(i=0;i<NUM_CAMPOS;i++)
    {
        pedir_datos[i] = 0;
        datosTrabajador[i] = 0;
    }
}
