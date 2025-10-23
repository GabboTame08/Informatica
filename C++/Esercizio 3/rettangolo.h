/*
Si crei una classe Rettangolo per memorizzare rettangoli e calcolarne perimetro e area. 
Creare poi un programma che sfruttando la classe scriva i perimetri e le aree di 10 rettangoli, 
il primo con lunghezze dei lati 1 e 2, il secondo con 2 e 3, il terzo con 3 e 4 e così via.
*/

#ifndef RETTANGOLO_H
#define RETTANGOLO_H

class rettangolo {
    private:
        int base;
        int altezza;
    
    public:
        rettangolo();
        int perimetro();
        int area();
        void setBase(int _base);
        void setAltezza (int _altezza);
        int getBase();
        int getAltezza();
        
};

#endif
