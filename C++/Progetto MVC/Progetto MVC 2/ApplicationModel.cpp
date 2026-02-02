#include "ApplicationModel.h"
#include <fstream>

void ApplicationModel::setDati(
    const std::string& n,
    const std::string& c,
    const std::string& d,
    const std::string& l,
    const std::string& cf
) {
    // Salvo i dati nei campi privati del model
    nome = n;
    cognome = c;
    dataNascita = d;
    luogoNascita = l;
    codiceFiscale = cf;
}

void ApplicationModel::salvaSuFile() const {
    // Creo il file carta_identita.txt nella cartella del progetto
    std::ofstream file("carta_identita.txt");

    if (file.is_open()) {
        // Scrivo i dati nel file
        file << "CARTA D'IDENTITA'\n";
        file << "-----------------\n";
        file << "Nome: " << nome << "\n";
        file << "Cognome: " << cognome << "\n";
        file << "Data di nascita: " << dataNascita << "\n";
        file << "Luogo di nascita: " << luogoNascita << "\n";
        file << "Codice fiscale: " << codiceFiscale << "\n";

        file.close(); // Chiudo il file
    }
}
