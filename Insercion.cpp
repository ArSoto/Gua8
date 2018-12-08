
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

void Insercion::binaria() {

    int aux;
    int izq;
    int der;
    int m;
    int j;

    for (int i = 1; i < max ; ++i) {
        aux = listaBinaria[i];
        izq = 1;
        der = i-1;

        while(izq <= der){
            m = (izq + der) /2;

            if(aux <= listaBinaria[m]){
                der = m-1;
            } else{
                izq = m+1;
            }

        }

        j = i-1;

        while (j>=izq){
            listaBinaria[j + 1] = listaBinaria[j];
            j = j-1;
        }

        listaBinaria[izq] = aux;


    }


    }

int *Insercion::getListaBinaria() {



    return listaBinaria;
}
int *Insercion::getListaDirecta() {
    return listaDirecta;
}


