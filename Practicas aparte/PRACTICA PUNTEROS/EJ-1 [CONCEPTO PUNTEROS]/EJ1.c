#include <stdio.h>

/**Explicación del uso de punteros*/

///Funcion para que muestra el ejemplo de punteros
void punt(void);

int main()
{
    punt();  ///llamamos a punteros()
    return 0;
}//Fin main


void punt()
{
    int num = 5;		///Variable 'num' de tipo int
    int *pnum;          ///Puntero '*pnum' a la dirección de memoria de 'num'

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
