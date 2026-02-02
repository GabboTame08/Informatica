//#include "StdAfx.h"
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include "ApplicationController.h"

void ApplicationController::run() {
    int comando = -1;

    // Ciclo principale del programma
    while (comando != 0) {
        view.draw();                   // Mostro il menu
        comando = view.leggiComando(); // Leggo il comando

        if (comando == 1) {
            // Inserimento dei dati della carta d'identità
            std::string n, c, d, l, cf;

            // La view legge i dati da tastiera
            view.leggiDati(n, c, d, l, cf);

            // Passo i dati al model
            model.setDati(n, c, d, l, cf);
        }
        else if (comando == 2) {
            // Chiedo al model di scrivere i dati nel file
            model.salvaSuFile();
        }
    }
}
