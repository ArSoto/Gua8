#include "Burbuja.h"
#include <iostream>
using namespace std;

Burbuja::Burbuja(int *lista, int n) {


    max = n;
    listaMayor = lista;
    listaMenor = lista;

}
void Burbuja::BorbujaMayor() {

    int aux;

    for(int i = max-1; i > 0; i-- ){
        for(int j = 0; j < i; j++){
            if(listaMayor[j] > listaMayor[j + 1]){
                aux = listaMayor[j];
                listaMayor[j] = listaMayor[j+1];
                listaMayor[j+1] = aux;
            }
        }
    }

    for (int k = 0; k < max ; ++k) {
        std::cout << listaMayor[k] << " " ;

    }

    cout << endl;





}

void Burbuja::BorbujaMenor() {

    int aux;

    for(int i = 0; i < max; i++  ){
        for (int j = max-1; j > i ; --j) {

            if(listaMenor[j-1] > listaMenor[j]){
                aux = listaMenor[j-1];
                listaMenor[j-1] = listaMenor[j];
                listaMenor[j] = aux;

            }


        }

    }

    for (int k = 0; k < max ; ++k) {
        std::cout << listaMenor[k] << " " ;

    }

    cout << endl;
}


