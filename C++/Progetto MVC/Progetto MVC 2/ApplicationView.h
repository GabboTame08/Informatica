#ifndef APPLICATIONVIEW_H
#define APPLICATIONVIEW_H

#include <string>

class ApplicationView {
public:
    // Stampa il menu a schermo
    void draw();

    // Legge il comando scelto dall'utente
    int leggiComando();

    // Legge i dati della carta d'identità da tastiera
    void leggiDati(
        std::string& nome,
        std::string& cognome,
        std::string& data,
        std::string& luogo,
        std::string& cf
    );
};

#endif
