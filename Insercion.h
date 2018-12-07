#ifndef GUIA8_INSERCION_H
#define GUIA8_INSERCION_H


class Insercion {
public:

    Insercion(int*, int);

    void directa();
    void binaria();

    int *getListaDirecta();
    int *getListaBinaria();

private:

    int *listaDirecta;
    int *listaBinaria;

    int max;



};


#endif //GUIA8_INSERCION_H
