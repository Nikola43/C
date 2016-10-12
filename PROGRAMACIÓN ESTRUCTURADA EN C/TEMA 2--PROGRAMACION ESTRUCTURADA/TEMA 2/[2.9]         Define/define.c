#include <stdio.h>
#define cuadrado(x) x*x
#define pi 3.141592
#define area_circulo(r) pi * cuadrado(r)

main()
{
float area;
float radio;

printf("Dame el radio: ");
scanf("%f",&radio);

area = area_circulo(radio);

printf("El area de un circulo de radio %f\n",radio);
printf("es %f unidades cuadradas\n",area);
system("pause>nul");
}
