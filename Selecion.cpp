
#include "Selecion.h"

Selecion::Selecion(int *lista, int n) {

    listaSeleccion = lista;
    max = n;


}

void Selecion::ordenSelecion() {

    int menor;
    int k;

    for (int i = 0; i < max -1 ; ++i) {
        menor = listaSeleccion[i];
        k = i;

        for (int j = i+1; j < max; ++j) {
            if(listaSeleccion[j] < menor){
                menor = listaSeleccion[j];
                k = j;

            }

        }
        listaSeleccion[k] = listaSeleccion[i];
        listaSeleccion[i] = menor;
    }

}

int *Selecion::getSeleccion() {
    return listaSeleccion;
}
