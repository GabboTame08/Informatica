/*
Si crei una classe Cerchio per memorizzare Cerchi e 
calcolarne circonferenza e area. Creare poi un programma 
che sfruttando la classe scriva le circonferenze e le aree di 
5 cerchi, il primo con raggio 1, il secondo con raggio 2 e così via.
*/

#include <iostream>
#include "cerchio.h"

using namespace std;

int main() {

    cerchio c1[5];

    for(int i=0; i<5; i++){
        c1[i].setRaggio(i+1);
    }

    for(int i=0; i<5; i++){
        cout << "Cerchio con raggio: " << c1[i].getRaggio();
        cout << " Circonferenza = " << c1[i].circonferenza();
        cout << " Area = " << c1[i].area() << "\n";

    }

    return 0;
}