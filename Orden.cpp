#include "Orden.h"

Orden::Orden(int *lista, int n) {

    listaBorbujaMayor = lista;
    listaBorbujaMenor = lista;
    listaInsercionDirecta = lista;
    listaInsercionBinaria = lista;
    listaSelecion = lista;
    listaShell = lista;
    listaQuicksort = lista;

    max = n;



}

void Orden::ordenarListas() {

    selecion();
    borbujaMayor();
    borbujaMenor();
    insercionBinaria();
    insercionDirecta();
    shell();





}

void Orden::selecion() {

    int menor;
    int k;

    for (int i = 0; i < max -1 ; ++i) {
        menor = listaSelecion[i];
        k = i;

        for (int j = i+1; j < max; ++j) {
            if(listaSelecion[j] < menor){
                menor = listaSelecion[j];
                k = j;

            }

        }
        listaSelecion[k] = listaSelecion[i];
        listaSelecion[i] = menor;
    }

}

void Orden::borbujaMayor() {

    int aux;

    for(int i = max-1; i > 0; i-- ){
        for(int j = 0; j < i; j++){
            if(listaBorbujaMayor[j] > listaBorbujaMayor[j + 1]){
                aux = listaBorbujaMayor[j];
                listaBorbujaMayor[j] = listaBorbujaMayor[j+1];
                listaBorbujaMayor[j+1] = aux;
            }
        }
    }




}

void Orden::borbujaMenor() {

    int aux;

    for(int i = 0; i < max; i++  ){
        for (int j = max-1; j > i ; --j) {

            if(this -> listaBorbujaMenor[j-1] > listaBorbujaMenor[j]){
                aux = listaBorbujaMenor[j-1];
                listaBorbujaMenor[j-1] = listaBorbujaMenor[j];
                listaBorbujaMenor[j] = aux;

            }


        }

    }

}

void Orden::insercionDirecta() {

    int aux;
    int k;

    for (int i = 1; i < max ; ++i) {
        aux = listaInsercionDirecta[i];
        k = i-1;

        while (k >= 1 && aux < listaInsercionDirecta[k]){
            listaInsercionDirecta[k+1] = listaInsercionDirecta[k];
            k--;


        }

        listaInsercionDirecta[k+1] = aux;



    }

    for (int j = 0; j < max ; ++j) {


    }

}

void Orden::insercionBinaria() {

    int aux;
    int izq;
    int der;
    int m;
    int j;

    for (int i = 1; i < max ; ++i) {
        aux = listaInsercionBinaria[i];
        izq = 1;
        der = i-1;

        while(izq <= der){
            m = (izq + der) /2;

            if(aux <= listaInsercionBinaria[m]){
                der = m-1;
            } else{
                izq = m+1;
            }

        }

        j = i-1;

        while (j>=izq){
            listaInsercionBinaria[j + 1] = listaInsercionBinaria[j];
            j = j-1;
        }

        listaInsercionBinaria[izq] = aux;


    }


}

void Orden::shell() {

    int aux2;
    int aux1;
    int contador;
    bool band;

    aux2 = max + 1;

    while (aux2 > 1){
        aux2 = aux2 / 2;
        band = true;

        while (band){
            band = false;
            contador = 1;

            while ((contador + aux2) <= max){
                if(listaShell[contador] > listaShell[contador+aux2]){

                    aux1 = listaShell[contador];
                    listaShell[contador]= listaShell[contador+aux2];
                    listaShell[contador+aux2] = aux1;
                    band = true;



                }

                contador++;
            }

        }
    }

}

//#########################
// Getters

int *Orden::getListaBinaria() {



    return listaInsercionBinaria;
}

int *Orden::getListaDirecta() {
    return listaInsercionDirecta;
}

int *Orden::getSeleccion() {
    return listaSelecion;
}

int *Orden::getShell() {
    return listaShell;
}




