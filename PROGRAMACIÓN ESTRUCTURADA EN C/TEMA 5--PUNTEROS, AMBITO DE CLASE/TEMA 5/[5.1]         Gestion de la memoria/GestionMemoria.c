#include <stdio.h>

/**Programa principal*/
void main(){
  unsigned char contador;
  contador = 0;
  while(contador != 255)
  {
    contador++;
    printf("%d-%X\n", contador, contador);
    system("read tecla");
  }//Fin while
}/*Fin main*/
