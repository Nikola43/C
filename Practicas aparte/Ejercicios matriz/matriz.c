///Incluimos librerias
#include <stdio.h>

///Definimos el tamaño de la matriz
#define X 8
#define Y 8

///Declaramos una matriz de 4x4


int matriz[X][Y] =
{
    {0,0,0,0,0,0,0,0},
    {0,1,1,1,0,0,0,0},
    {0,1,0,0,1,0,0,0},
    {0,1,0,0,1,0,0,0},
    {0,1,1,1,0,0,0,0},
    {0,1,0,0,0,0,0,0},
    {0,1,0,0,0,0,0,0},
    {0,1,0,0,0,0,0,0}
};

void main()
{
    //read();
    print_matrix();

}///Fin main

void read_matrix()
{
    int eleccion;
    int x,y;
    if(eleccion == 1)
    {
        for(x=0; x<X; x++)
        {
            for(y=0; y<Y; y++)
            {
                printf("Introduzca el valor para la casilla [%d][%d]: ",x+1,y+1);
                scanf("%d",&matriz[x][y]);
            }///Fin for i
            printf("\n");
        }///Fin for j
    }///Fin if
}

void print_matrix()
{
  int x,y;
  printf("\n\n");
  printf(".:| Matriz ordenada |:.\n\n");
  for(x=0; x<Y; x++)
  {
    for(y=0; y<Y; y++)
    {
      printf("%d ",matriz[x][y]);
    }///Fin for i
    printf("\n");
  }///Fin for j
}///Fin print_matrix()
