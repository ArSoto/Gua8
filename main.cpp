#include <iostream>
#include <cstdlib>
#include "Burbuja.h"
#include "Insercion.h"


int main() {
    int n = 8;

    int *lista;
    lista = new int [n];

    for (int i = 0; i < n ; ++i) {
        lista[i] = rand() % n;



    }


    Burbuja borbuja(lista ,n);

    borbuja.BorbujaMayor();
    borbuja.BorbujaMenor();

    Insercion insercion(lista, n);

    insercion.directa();


    int *directa= insercion.getListaDirecta();









    return 0;
}