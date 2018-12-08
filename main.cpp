#include <iostream>
#include <cstdlib>
#include "Orden.h"

using  namespace std;



int main() {
    int n = 8;

    int *lista;
    lista = new int [n];

    for (int i = 0; i < n ; ++i) {
        lista[i] = rand() % n;
        cout << lista[i] << " ";



    }

    Orden algoritmos(lista, n);
    algoritmos.ordenarListas();




    return 0;
}