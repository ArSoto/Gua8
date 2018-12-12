#include "Orden.h"
#include <time.h>
#include <ctime>

/**
 * Constructor
 * */

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

/**
 * Ejecuta los algoritmos de ordenamiento  y mide el tiempo de proceso
 * de cada uno de ellos.
 */

void Orden::ordenarListas() {

    clock_t medidorTiempo;
    cout << "Quicksort... "<< endl;
    medidorTiempo = clock();
    quicksort();
    tQuicksort = (clock() - medidorTiempo*1.0)/CLOCKS_PER_SEC*1000;


    medidorTiempo = clock();
    borbujaMenor();
    tBorbujaMenor = (clock() - medidorTiempo*1.0)/CLOCKS_PER_SEC * 1000;

    medidorTiempo = clock();
    borbujaMayor();
    tBorbujaMayor = (clock() - medidorTiempo*1.0)/CLOCKS_PER_SEC *1000;

    medidorTiempo = clock();
    insercionDirecta();
    tInsercionDirecta = (clock() - medidorTiempo*1.0)/CLOCKS_PER_SEC *1000;

    medidorTiempo = clock();
    insercionBinaria();
    tInsercionBinaria = (clock() - medidorTiempo*1.0)/CLOCKS_PER_SEC *1000;

    medidorTiempo = clock();
    selecion();
    tSelecion = (clock() - medidorTiempo*1.0)/CLOCKS_PER_SEC*1000;

    medidorTiempo = clock();
    shell();
    tShell = (clock() - medidorTiempo*1.0)/CLOCKS_PER_SEC*1000;




}

/**
 * Definicion los metodos de ordenamiento
 * */

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

void Orden::quicksort() {

    int tope;
    int ini;
    int fin;
    int pos;
    int pilaMenor[max];
    int pilaMayor[max];

    tope = 1;
    pilaMenor[tope] = 1;
    pilaMayor[tope] = max;

    while (tope > 0){
        ini = pilaMenor[tope];
        fin = pilaMayor[tope];
        tope--;
        auxQuicksort(ini, fin, pos);

        if(ini < (pos -1)){
            tope++;
            pilaMenor[tope] = ini;
            pilaMayor[tope] = pos -1;

        }
        if(fin > (pos+1)){
            tope++;
            pilaMenor[tope] = pos + 1;
            pilaMayor[tope] = fin;
        }

    }
}

void Orden::auxQuicksort(int ini, int fin, int &pos) {

    int izq = ini;
    int der = fin;
    bool band = true;
    int aux;

    pos = ini;

    while(band){
        while (listaQuicksort[pos] <= listaQuicksort[der] && pos != der){
            der--;

        }
        if (pos == der){
            band = false;

        } else{
            aux = listaQuicksort[pos];
            listaQuicksort[pos] = listaQuicksort[der];
            listaQuicksort[der] = aux;
            pos = der;

            while(listaQuicksort[pos] >= listaQuicksort[izq] && pos != izq){
                izq ++;
            }

            if(pos == izq){
                band = false;

            } else{
                aux = listaQuicksort[pos];

                listaQuicksort[pos] = listaQuicksort[izq];
                listaQuicksort[izq] = aux;

                pos = izq;
            }
        }
    }


}


/**
 * Getter de las listas ordenadas
 * */

int *Orden::getListaInsercionBinaria() {



    return listaInsercionBinaria;
}

int *Orden::getListaInsercionDirecta() {
    return listaInsercionDirecta;
}

int *Orden::getListaSeleccion() {
    return listaSelecion;
}

int *Orden::getShell() {
    return listaShell;
}

int *Orden::getQuicksort() {
    return listaQuicksort;
}

int *Orden::getListaBorbujaMayor() {
    return listaBorbujaMayor;
}

int *Orden::getListaBorbujaMenor() {
    return listaBorbujaMenor;
}

/**
 *  Getters del tiempo de ejecucion de los algoritmos
 * */

double Orden::getTBorbujaMayor() {
    return tBorbujaMayor;
}

double Orden::getTBorbujaMenor() {
    return tBorbujaMenor;
}

double Orden::getTSelecion() {
    return tSelecion;
}

double Orden::getTInsercionB() {
    return tInsercionBinaria;
}

double Orden::getTInsercionD() {
    return tInsercionDirecta;
}

double Orden::getTShell() {
    return tShell;
}

double Orden::getTQuicksort() {
    return tQuicksort;
}







