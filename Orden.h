#ifndef ORDEN_H
#define ORDEN_H

#include <iostream>
using  namespace std;

class Orden {

private:
    int max;    //Tamaño de la lista

    /**
     * Listas individuales para cada proceso de ordenamiento
     * */
    int *listaBorbujaMayor;
    int *listaBorbujaMenor;
    int *listaInsercionDirecta;
    int *listaInsercionBinaria;
    int *listaSelecion;
    int *listaShell;
    int *listaQuicksort;

    /**
     * Variables para almacenar el tiempo de ejecucion de los algoritmos
     * */

    double tBorbujaMayor;
    double tBorbujaMenor;
    double tInsercionDirecta;
    double tInsercionBinaria;
    double tSelecion;
    double tShell;
    double tQuicksort;

    /**
     * Declaracion de los metodos de ordenamiento
     * */

    void selecion();
    void borbujaMayor();
    void borbujaMenor();
    void insercionDirecta();
    void insercionBinaria();
    void shell();
    void quicksort();
    void auxQuicksort(int, int, int& );

public:

    /** Declaracion del Constructor */
    Orden(int *, int);

    /** Declaracion metodo que ejecuta los algoritmos de ordenamiento  y mide el tiempo de proceso
 * de cada uno de ellos.
 */
    void ordenarListas();   // llama a todos los metodos de ordenamiento


    /**
     * Getters de las listas ordenadas
     * */

    int *getListaBorbujaMayor();
    int *getListaBorbujaMenor();
    int *getListaSeleccion();
    int *getListaInsercionDirecta();
    int *getListaInsercionBinaria();
    int *getShell();
    int *getQuicksort();


    /**
 *  Getters del tiempo de ejecucion de los algoritmos
 * */

    double getTBorbujaMayor();
    double getTBorbujaMenor();
    double getTSelecion();
    double getTInsercionB();
    double getTInsercionD();
    double getTShell();
    double getTQuicksort();


};


#endif
