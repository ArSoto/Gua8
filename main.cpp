#include <iostream>
#include <cstdlib>
#include "Orden.h"
#include<time.h>

using  namespace std;

void imprimir(Orden);

int main() {
    int n = 8;

    int *lista;
    lista = new int [n];
    srand(time(NULL));
    for (int i = 0; i < n ; ++i) {
        lista[i] = rand() % n;
        cout << lista[i] << " ";

    }

    Orden algoritmos(lista, n);
    algoritmos.ordenarListas();

    int *listaq = algoritmos.getQuicksort();

    for (int j = 0; j <n ; ++j) {

        cout<< listaq[j] << " ";
    }
    cout<< endl;

    int *a = algoritmos.getSeleccion();

    for (int k = 0; k < n ; ++k) {
        cout << a[k] << " " ;
    }


    return 0;
}

void imprimir(Orden orden){

    cout << "------------------------------------" << endl;
    cout << " Metodo     |Tiempo                 " << endl;
    cout << "------------------------------------" << endl;

}