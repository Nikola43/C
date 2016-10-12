///Incluimos librerias
#include <stdio.h>
#include <stdlib.h>

///Definimos constantes
#define NUMMONEDAS 8
#define CANTIDAD 8
#define NUMPRODUCTOS 9

///Definimos los prototipos de funciones
int devolverCambio(int ,int[]);
int comprarProducto(int);
int cargarSaldo(int[]);

///Funcion principal
void main()
{
    int saldo,cambio;
    int monedas[NUMMONEDAS] = {200,100,50,20,10,5,2,1};
    saldo=cargarSaldo(monedas);
    cambio=comprarProducto(saldo);
    devolverCambio(cambio,monedas);
}///Fin main

int devolverCambio(int cambio ,int monedas[])
{
    ///Limpiamos la pantalla
    system("cls");

    ///Definimos una variable temporal para saber el numero de monedas a devolver
    ///LLamada tempm a la que le asignaremos el valor del cambio e iremos restando las monedas hasta llegar a 0
    int tempm = cambio;
    int cantidadMonedas [CANTIDAD] = {0,0,0,0,0,0,0,0};  ///Una array para almacenar el numero de monedas de cada tipo
    int a=0;
    while(tempm != 0)   ///Con este while ira restando a tempm las monedas hasta llegar a 0
    {
        for(a=0;a<9;a++)
        {
        while(tempm >= monedas[a]) ///Si el valor de tempm es igual o mayor a el valor una moneda empezando por la de 2 euros
        {
        tempm -= monedas[a]; ///Entonces el valor de tempn es su valor menos el valor de la moneda restada
        cantidadMonedas[a]++;       ///Y aumentamos en uno el valor de memoria de la array correspondiente a la moneda elegida
        }
    }
    }
    ///Mostramos el cambio final y el numero de monedas a devolver
    printf("\nCantidad a devolver: %d Euros y %d Centimos\n\n",cambio/100,cambio%100);

    printf("%d monedas de 2 Euros\n",cantidadMonedas[0]);
    printf("%d monedas de 1 Euro\n",cantidadMonedas[1]);
    printf("%d monedas de 50 Centimos\n",cantidadMonedas[2]);
    printf("%d monedas de 20 Centimos\n",cantidadMonedas[3]);
    printf("%d monedas de 10 Centimos\n",cantidadMonedas[4]);
    printf("%d monedas de 5 Centimos\n",cantidadMonedas[5]);
    printf("%d monedas de 2 Centimos\n",cantidadMonedas[6]);
    printf("%d monedas de 1 Centimos\n",cantidadMonedas[7]);

}///End devolverCambio

int comprarProducto(int saldo)
{
    ///Definimos las variables para la opción elegida el cambio y la array para el precio de los productos.
    int option = 0, cambio = 0, precioProducto[NUMPRODUCTOS]= {80,115,90,45,40,95,75,225,315};;
    do
    {
    system("cls");
    printf("\nArticulos disponibles:\n");
    printf("(0) Devolver dinero\n");
    printf("(1) Galletas de chocolate -----> 0.80 Euros\n");
    printf("(2) Bolsa de gominolas --------> 1.15 Euros\n");
    printf("(3) Patatas fritas ------------> 0.90 Euros\n");
    printf("(4) Zumo de melocoton ---------> 0.45 Euros\n");
    printf("(5) Botella de agua mineral ---> 0.40 Euros\n");
    printf("(6) Cacahuetes ----------------> 0.95 Euros\n");
    printf("(7) Refresco ------------------> 0.75 Euros\n");
    printf("(8) Sandwitch de York y Queso -> 2.25 Euros\n");
    printf("(9) Sandwitch Vegetal ---------> 3.15 Euros\n");

    printf("\nSaldo: %d Euros y %d Centimos\n",saldo/100,saldo%100);
    printf("Introduzca la opcion: ");
    scanf("%d",&option);

    ///Si la opción es 0 el cambio que la máquina es el saldo acumulado
    if(option == 0)
        cambio = saldo;
    else
        cambio = saldo - precioProducto[option-1];
        ///Si no el cambio es el saldo acumulado menos el precio del
        ///produto elegido - 1 dado que la array empieza por 0

    if(cambio < 0){
        printf("\nNo tiene saldo para comprar este producto, compre otro\n");
        system("pause");}
    }while(cambio < 0);
    return cambio;  ///Devolvemos el el valor de cambio a la llamada de la función.
    system("pause");
}///End comprarProducto

int cargarSaldo(int monedas[])
{
    ///Definimos la variable para la opción elegida y el saldo.
    int option, saldo = 0;
    do
    {
        ///Mostramos las monedas que se pueden introducir
        system("cls");
        printf("\n(0) No quiero introducir mas monedas\n");
        printf("(1) 2 Euros\n");
        printf("(2) 1 Euro\n");
        printf("(3) 50 centimos\n");
        printf("(4) 20 centimos\n");
        printf("(5) 10 centimos\n");
        printf("(6) 5 centimos\n");
        printf("(7) 2 centimos\n");
        printf("(8) 1 centimos\n");

        printf("\nSaldo: %d Euros y %d Centimos\n",saldo/100,saldo%100);
        printf("Introduzca la opcion: ");
        scanf("%d",&option);    ///Leemos la opción.

        ///Si la opción elegida es mayor que 0 saldo
        ///es igual al saldo acumulado más la moneda elegida - 1
        ///dado que la array empieza por 0
        if(option > 0)
            saldo += monedas[option-1];
    }while(option > 0); ///El bucle se repetirá mientras la opcion sea mayor que 0
    return saldo;
}///End cargarSaldo
