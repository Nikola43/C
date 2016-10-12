/**
Nombre del programa:      HospiCalc
Nombre del programador:   Paulo Soares

Descripción del programa:
El programa toma por teclado el coste de los diversos datos:

    * Número total de días en el hospital.
    * Coste de la consulta.
    * Coste de las medicinas.
    * Costes diversos.
    * Precio por día.
    * Deducción del seguro

Calcula el coste que debe pagar el usuario y muestra:

    * Coste total de la estancia.
    * Coste total menos las medicinas.
    * Coste total menos las medicinas y la deducción del seguro
*/

///Incluimos librerías
#include <stdio.h>

///Prototipo de funciones
void explicarPrograma(void);
void obtenerDatos(void);
void calcularCoste(float datos[]);
void mostrarResultado(float precioTotalPagado, float precioTotalPagadoMedicina, float PrecioPagadoMedicinaSeguro);

void main()
{ explicarPrograma();
  obtenerDatos();
}///Fin main

void explicarPrograma(void)
{ puts("\n    .:: HospiCalc ::.\n");
  puts("Este programa calcula lo que tiene que pagar el cliente en el hospital");
  puts("Debes introducir los datos que se te piden a continuacion\n");
}///Fin explicarPrograma

void obtenerDatos()
{
  float numDias,costeConsulta,costeMedicinas,costesDiversos,precioDia,deduccionSeguro;
  float data[6] = {numDias,costeConsulta,costeMedicinas,costesDiversos,precioDia,deduccionSeguro};

  printf("Introduce el numero total de dias en el hospital: ");
  scanf("%f",&data[0]);
  puts("");
  printf("Introduce el coste de la consulta: ");
  scanf("%f",&data[1]);
  puts("");
  printf("Introduce el coste de las medicinas: ");
  scanf("%f",&data[2]);
  puts("");
  printf("Introduce los costes diversos: ");
  scanf("%f",&data[3]);
  puts("");
  printf("Introduce el precio por dia: ");
  scanf("%f",&data[4]);
  puts("");
  printf("Introduce la deduccion del seguro: ");
  scanf("%f",&data[5]);
  puts("");

  calcularCoste(data);
}///Fin obtenerDatos.

void calcularCoste(float datos[6])
{
  int precioTotal = 0;
  int precioTotalMedicina = 0;
  int precioTotalMedicinaSeguro = 0;

  precioTotal = datos[0] * (datos[1] + datos[2] + datos[3] + datos[4]);
  precioTotalMedicina = precioTotal - datos[2];
  precioTotalMedicinaSeguro = precioTotal - datos[2] - datos[5] ;

  mostrarResultado(precioTotal,precioTotalMedicina,precioTotalMedicinaSeguro);
}///Fin calcularCoste

void mostrarResultado(float precioTotalPagado, float precioTotalPagadoMedicina, float precioTotalPagadoMedicinaSeguro)
{
    printf("\nEl usuario debe pagar: \n\n");
    printf("Por la estancia total: %0.2f\n",precioTotalPagado);
    printf("Por la estancia total menos las medicinas: %0.2f\n",precioTotalPagadoMedicina);
    printf("Por la estancia total menos las medicinas y la deduccion del seguro: %0.2f\n",precioTotalPagadoMedicinaSeguro);
}///Fin mostrarResultado
