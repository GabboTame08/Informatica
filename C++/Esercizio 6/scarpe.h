/*
Si crei una classe scarpe con gli strectch (linguette adesive col feltro); 
ogni paio di scarpe è caratterizzato dalla dimensione 
(data da un numero intero) e ha tre stretch sulla scarpa destra e tre sulla scarpa sinistra.
Creare due paia di scarpe con gli stretch e per 10 volte estrarre 
casualmente su quale paio di scarpe cambiare da allacciato a slacciato uno 
degli stretch (scelto casualmente) di una delle due scarpe scelta sempre casualmente.
Dopo aver fatto aprire e chiudere per le 10 volte gli stretch, 
stampare la situazione finale delle scarpe; si consideri che 
inizialmente tutti gli stretch sono slacciati.
*/

#ifndef SCARPE_H
#define SCARPE_H

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Scarpe {
    private:
        int dimensione;
        int destra[3];
        int sinistra[3];

public:
    Scarpe(int dim);
    void cambiaStretchCasuale();
    void stampa();
};

#endif
 