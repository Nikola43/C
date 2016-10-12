#include <stdio.h>

/**Explicaci�n del uso de punteros*/

///Funcion para que muestra el ejemplo de punteros
void ptr(void);
void ptrs(void);

void main()
{
    ptr();  ///llamamos a punteros()
    ptrs();
}//Fin main


void ptrs(void)
{
    int num = 5;		///Variable 'num' de tipo int
    int *pnum;          ///Puntero '*pnum' a la direcci�n de memoria de 'num'

    ///Asignamos la direccion de memoria de la variable 'num' al puntero '*pnum'
    pnum = &num;
    ///Ahora pnum

    ///Ahora mostramos la direccion de 'num' y el valor de la direccion
    printf("\nDireccion de 'num' | Valor 'num'\n");
    printf("%X | %i\n",&num,num);

    ///Ahora mostramos la direccion de memoria del puntero '*pnum' y el valor de la direccion
    printf("\nDireccion de '*pnum' | Valor de 'pnum'\n");
    printf("%X | %X\n",&pnum,pnum); /// Valor de 'pnum' = direccion de memoria 'num'

    printf("\nValor al que apunta *pnum: %i\n",*pnum);    ///Ahora muestra el valor de la direccion a la que apunta el puntero
                                                          ///que es el valor de la direccion de memoria de 'num'
}

void ptr(void)
{
    int i=100;
    int *p1;
    int *p2;
    ///Asignamos las direcciones de memoria a los punteros
    p1 = &i;
    p2 = p1;

    printf("\nLa direccion de i %X\n",&i);
    printf("La direccion a la que apunta p1 %X\n",p1);
    printf("La direccion a la que apunta p2 %X\n\n",p2);

    printf("La direccion de p1 %X\n",&p1);
    printf("La direccion de p2 %X\n\n",&p2);

    printf("Si las direcciones a las que apuntan p1 y p2 son iguales");
    if(p1==p2) /** estamos comparando dos punteros */
        printf("\nEntonces p1 apunta a la misma direccion de memoria que p2\n\n");

    *p1 = *p1 + 2; /** El * tiene m�s prioridad que el + */

    printf("El valor de i es %d\n", i);

    printf("El valor de *p2 es %d\n", *p2);

    (*p2)++; /** ante la duda de prioridades usamos parentesis */
    printf("El valor de *p1 es %d\n", *p1);

    i += 2;
    printf("El valor de i es %d\n", i);
}
