#ifndef ORDEN_H
#define ORDEN_H


class Orden {

private:
    int max;

    int *listaBorbujaMayor;
    int *listaBorbujaMenor;
    int *listaInsercionDirecta;
    int *listaInsercionBinaria;
    int *listaSelecion;
    int *listaShell;
    int *listaQuicksort;


    void selecion();
    void borbujaMayor();
    void borbujaMenor();
    void insercionDirecta();
    void insercionBinaria();
    void shell();
    void quicksort();

public:
    Orden(int *, int);      // Declaracion del Constructor

    void ordenarListas();   // llama a todos los metodos de ordenamiento


    int *getSeleccion();



    int *getListaDirecta();
    int *getListaBinaria();


    int *getShell();


};


#endif
