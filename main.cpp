#include <iostream>
#include <cstdlib>
#include "Burbuja.h"
#include "Insercion.h"

using  namespace std;


int main() {
    int n = 8;

    int *lista;
    lista = new int [n];

    for (int i = 0; i < n ; ++i) {
        lista[i] = rand() % n;
        cout << lista[i] << " ";



    }

    cout << endl;

    Burbuja borbuja(lista ,n);

    borbuja.BorbujaMayor();
    borbuja.BorbujaMenor();

    Insercion insercion(lista, n);

    insercion.directa();


    int *directa= insercion.getListaDirecta();

    for (int j = 0; j <n ; ++j) {
        cout<< directa[j] << " ";

    }

    cout << endl<< "dd"<< endl;
    int *binaria= insercion.getListaBinaria();

    for (int k = 0; k < n ; ++k) {
        cout << binaria[k] << " ";

    }

    cout << endl;








    return 0;
}