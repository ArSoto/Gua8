#include <iostream>
#include <cstdlib>
#include "Orden.h"
#include<time.h>

using  namespace std;

void imprimirTiempos(Orden);
void imprimirListas(Orden, int );

int main() {
    int n = 1000;

    int *lista;
    lista = new int [n];
    srand(time(NULL));
    for (int i = 0; i < n ; ++i) {
        lista[i] = rand() % n;
        cout << "["<< i << "]" << lista[i] << " ";

    }
    cout << endl;

    Orden algoritmos(lista, n);
    algoritmos.ordenarListas();

    imprimirTiempos(algoritmos);
    imprimirListas(algoritmos, n);

    return 0;
}

void imprimirTiempos(Orden algoritmos){

    cout << "---------------------------------------" << endl;
    cout << " Metodo            |Tiempo              " << endl;
    cout << "---------------------------------------" << endl;
    cout << " Borbuja Menor     |" << algoritmos.getTBorbujaMenor() << " milisegundos"<< endl;
    cout << " Borbuja Mayor     |" << algoritmos.getTBorbujaMayor() << " milisegundos"<< endl;
    cout << " Insercion         |" << algoritmos.getTInsercionD()   << " milisegundos"<< endl;
    cout << " Insercion Binaria |" << algoritmos.getTInsercionB()   << " milisegundos"<< endl;
    cout << " Seleccion         |" << algoritmos.getTSelecion()     << " milisegundos"<< endl;
    cout << " Shell             |" << algoritmos.getTShell()        << " milisegundos"<< endl;
    cout << " Quicksort         |" << algoritmos.getTQuicksort()     << " milisegundos"<< endl;
    cout << "......................................." << endl;
    cout << endl;

}
void imprimirListas(Orden algoritmos, int max){

    cout << "Borbuja Menor     ";
    for (int i = 0; i < max; ++i) {
        cout << "a[" << i << "]=" << algoritmos.getListaBorbujaMenor()[i] << " ";

    }
    cout << endl;


    cout << "Borbuja Mayor     ";
    for (int i = 0; i < max; ++i) {
        cout << "a[" << i << "]=" << algoritmos.getListaBorbujaMayor()[i] << " ";

    }
    cout << endl;

    cout << "Borbuja Menor     ";
    for (int i = 0; i < max; ++i) {
        cout << "a[" << i << "]=" << algoritmos.getListaBorbujaMenor()[i] << " ";

    }
    cout << endl;

    cout << "Insercion Directa ";
    for (int i = 0; i < max; ++i) {
        cout << "a[" << i << "]=" << algoritmos.getListaInsercionDirecta()[i] << " ";

    }
    cout << endl;

    cout << "Insercion Binaria ";
    for (int i = 0; i < max; ++i) {
        cout << "a[" << i << "]=" << algoritmos.getListaInsercionBinaria()[i] << " ";

    }
    cout << endl;

    cout << "Seleccion         ";
    for (int i = 0; i < max; ++i) {
        cout << "a[" << i << "]=" << algoritmos.getListaSeleccion()[i] << " ";

    }
    cout << endl;


    cout << "Shell             ";
    for (int i = 0; i < max; ++i) {
        cout << "a[" << i << "]=" << algoritmos.getListaSeleccion()[i] << " ";

    }
    cout << endl;

    cout << "Quicksort         ";
    for (int i = 0; i < max; ++i) {
        cout << "a[" << i << "]=" << algoritmos.getQuicksort()[i] << " ";

    }




}
