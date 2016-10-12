#include <stdio.h>

void comprobacion();
int comprobar_luz(char condicion);

int main()
{
    comprobacion();
    return(0);
}

void comprobacion()
{
    char entrada;

    printf("\nSeleccione\n1.Rojo \n2.Verde \n3.OFF\n");
    entrada = getchar();

    comprobar_luz(entrada);
    return;
}

int comprobar_luz(char condicion)
{
    switch (condicion)
    {
        case '1': printf("Comprobar temperatura del sistema\n"); break;
        case '2': printf("Sistema correcto\n"); break;
        case '3': printf("Comprobar fusible del sistema\n"); break;
        default:  printf("Opcion no valida!\n"); break;break;
    }
}
