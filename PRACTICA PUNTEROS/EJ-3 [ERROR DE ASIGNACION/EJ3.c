#include <stdio.h>

///Prototipo de funciones
void ejemplo1(void);
void ejemplo2(void);

void main()
{
  ejemplo1();
  ejemplo2();
}

///Error puntero no inicializado
void ejemplo1(void)
{
    int i = 50;
    int *p;
    /** Abría que asignar a donde apunta 'p' | p=&i;  */
    *p = i; /** ¡ERROR! ¿A dónde apunta el puntero p? */
    printf("El valor de i es %i \n", i);
    printf("El valor de *p es %i \n\n", *p);

}///Fin ejemplo1();

void ejemplo2()
{
int i = 50;
int *p;
/** p = &i; Serial lo correcto */
p = i; /** Se le asigna el valor de 'i'(50) a donde apunta 'p'. Entonces p apunta a 50 */
printf("El valor de i es %i \n", i);
printf("El valor de *p es %i \n", *p);

}///Fin ejemplo2()
