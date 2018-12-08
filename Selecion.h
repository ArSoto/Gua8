#ifndef GUIA8_SELECION_H
#define GUIA8_SELECION_H


class Selecion {

private:
    int *listaSeleccion;
    int max;

public:

    Selecion(int *, int);

    void ordenSelecion();
    int *getSeleccion();



};


#endif //GUIA8_SELECION_H
