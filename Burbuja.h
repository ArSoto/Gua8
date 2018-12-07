
#ifndef GUIA8_BURBUJA_H
#define GUIA8_BURBUJA_H


class Burbuja {

public:
    Burbuja(int *, int);

    void BorbujaMayor();
    void BorbujaMenor();

private:
    int *listaMenor;
    int *listaMayor;
    int max;


};


#endif //GUIA8_BURBUJA_H
