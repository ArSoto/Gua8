#include <iostream>
#include <cstdlib>
#include "Orden.h"
#include<time.h>

using  namespace std;

void imprimir(Orden);

int main() {
    int n = 50000;

    int *lista;
    lista = new int [n];
    srand(time(NULL));
    for (int i = 0; i < n ; ++i) {
        lista[i] = rand() % n;
        cout << lista[i] << " ";

    }
    cout << endl;

    Orden algoritmos(lista, n);
    algoritmos.ordenarListas();

    imprimir(algoritmos);

    return 0;
}

void imprimir(Orden algoritmos){

    cout << "---------------------------------------" << endl;
    cout << " Metodo            |Tiempo              " << endl;
    cout << "---------------------------------------" << endl;
    cout << " Borbuja Menor     |" << algoritmos.getTBorbujaMenor() << " milisegundos"<< endl;
    cout << " Borbuja Mayor     |" << algoritmos.getTBorbujaMayor() << " milisegundos"<< endl;
    cout << " Insercion         |" << algoritmos.getTInsercionD()   << " milisegundos"<< endl;
    cout << " Insercion Binaria |" << algoritmos.getTInsercionB()   << " milisegundos"<< endl;
    cout << " Seleccion         |" << algoritmos.getTSelecion()     << " milisegundos"<< endl;
    cout << " Shell             |" << algoritmos.getTShell()        << " milisegundos"<< endl;
    cout << " Quitsort          |" << algoritmos.getTQuitsort()     << " milisegundos"<< endl;

}
