/*
Si crei una classe Cerchio per memorizzare Cerchi e 
calcolarne circonferenza e area. Creare poi un programma 
che sfruttando la classe scriva le circonferenze e le aree di 
5 cerchi, il primo con raggio 1, il secondo con raggio 2 e così via.
*/

#ifndef CERCHIO_H
#define CERCHIO_H

class cerchio {
    private:
        int raggio;
    
    public:
        cerchio();
        int circonferenza();
        int area();
        void setRaggio(int _raggio);
        int getRaggio();
        
};

#endif