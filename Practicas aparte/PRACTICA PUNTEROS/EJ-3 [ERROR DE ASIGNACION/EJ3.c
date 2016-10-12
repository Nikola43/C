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
    int i, *p;
    i = 50;
    //p=&i;
    *p = i; /** ¡ERROR! ¿A dónde apunta el puntero p? */
    printf("El valor de i es %i \n", i);
    printf("El valor de *p es %i \n\n", *p);

}///Fin ejemplo1();

void ejemplo2()
{
int i, *p;
i = 50;
/** p = &i; Serial lo correcto */
p = i;
printf("El valor de i es %i \n", i);
printf("El valor de *p es %i \n", *p);

}///Fin ejemplo2()
