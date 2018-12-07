
#include "Insercion.h"

Insercion::Insercion(int *lista, int n) {

    listaDirecta = lista;
    listaBinaria = lista;
    max = n;

}

void Insercion::directa() {

    int aux;
    int k;

    for (int i = 1; i < max ; ++i) {
        aux = listaDirecta[i];
        k = i-1;

        while (k >= 1 && aux < listaDirecta[k]){
            listaDirecta[k+1] = listaDirecta[k];
            k--;


        }

        listaDirecta[k+1] = aux;



    }

    for (int j = 0; j < max ; ++j) {


    }

}

int *Insercion::getListaDirecta() {
    return listaDirecta;
}
