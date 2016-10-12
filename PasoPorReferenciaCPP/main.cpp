#include <iostream>
#include <ctype.h>
#include <string.h>

using namespace std;

//Funcion:
void fraseMayusculas(char*);

int main()
{
    char texto[120];
    char *ptexto2[120]; //Puntero de char

    cout << "Introduzca frase" << endl;
    cin.getline(texto, 120);

    cout << "Introduzca frase Puntero" << endl;
    cin.getline(*ptexto2, 120);
    cout << endl;

    cout << "Sus textos:" << endl<<endl;
    cout << "Texto1: " << texto << endl << endl;
    cout << "Texto2: " << *ptexto2 << endl << endl;
    cout << endl;
    //Convertimos todo a Mayuscula:
    //No se pasa como &texto
    //A menos que sea un elemento, por ej  &texto[3]
    fraseMayusculas(texto);
    //Pasamos el puntero a la funcion:
    fraseMayusculas(*ptexto2);

    //Escribimos texto convertido:
    cout << "Sus textos convertidos:" << endl << endl;
    cout << "Texto1: " << texto << endl << endl;
    cout << "Texto2: " << *ptexto2 << endl << endl;

    return 0;
}

void fraseMayusculas(char *frase){
    for (int x = 0; x < 120; x++ )
        if (isalpha(frase[x]))
            frase[x] = toupper(frase[x]);
}
