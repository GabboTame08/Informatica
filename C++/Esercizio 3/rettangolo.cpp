/*
Si crei una classe Rettangolo per memorizzare rettangoli e calcolarne perimetro e area. 
Creare poi un programma che sfruttando la classe scriva i perimetri e le aree di 10 rettangoli, 
il primo con lunghezze dei lati 1 e 2, il secondo con 2 e 3, il terzo con 3 e 4 e così via.
*/

#include "rettangolo.h"
#include <iostream>

using namespace std;

rettangolo::rettangolo(){
    altezza=1;
    base=2;
}

rettangolo::perimetro(){
    return (base+altezza)*2;
}
int rettangolo::area(){
    return (base*altezza);
}
void rettangolo::setBase(int _base){
    base = _base;
}
void rettangolo::setAltezza (int _altezza){
    altezza = _altezza;
}
int rettangolo::getBase(){
    return base;
}
int rettangolo::getAltezza(){
    return altezza;
}






