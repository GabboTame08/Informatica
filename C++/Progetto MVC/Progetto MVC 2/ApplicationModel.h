#ifndef APPLICATIONMODEL_H
#define APPLICATIONMODEL_H

#include <string>
#include "MVC.h"

class ApplicationModel {
private:
    // Dati della carta d'identita'
    std::string nome;
    std::string cognome;
    std::string dataNascita;
    std::string luogoNascita;
    std::string codiceFiscale;

public:
    // Imposta tutti i dati inseriti dall'utente
    // uso i riferimenti per evitare copie inutili
    void setDati(
        const std::string& n,
        const std::string& c,
        const std::string& d,
        const std::string& l,
        const std::string& cf
    );

    // Scrive i dati della carta d'identita' in un file di testo
    void salvaSuFile() const; //const lo ho uso perche' cosi' non mi modifica i dati di "default"
};

#endif

