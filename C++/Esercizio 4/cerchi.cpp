/*
Si crei una classe Cerchio per memorizzare Cerchi e 
calcolarne circonferenza e area. Creare poi un programma 
che sfruttando la classe scriva le circonferenze e le aree di 
5 cerchi, il primo con raggio 1, il secondo con raggio 2 e così via.
*/

#include "cerchio.h"
#include <iostream>
#include <cmath>

using namespace std;

cerchio::cerchio(){
    raggio=1;
}

cerchio::circonferenza(){
    return M_PI*2*raggio;
}
int cerchio::area(){
    return M_PI*(raggio*raggio);
}
void cerchio::setRaggio(int _raggio){
    raggio = _raggio;
}

int cerchio::getRaggio(){
    return raggio;
}