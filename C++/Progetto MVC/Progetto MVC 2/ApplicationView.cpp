//#include "StdAfx.h"
#include "ApplicationView.h"
#include <iostream>
#include <cstdlib>

void ApplicationView::draw() {
    // Pulisco la console prima di ristampare il menu
    system("cls");

    // Stampo solo la parte grafica
    std::cout << "--------------------------------------------\n";
    std::cout << "|     Creazione Carta d'identita'           |\n";
    std::cout << "--------------------------------------------\n";
    std::cout << "| COMANDI: [0] Esci  [1] Inserisci Dati     |\n";
    std::cout << "|          [2] Stampa su file               |\n";
    std::cout << "--------------------------------------------\n";
    std::cout << "Inserisci il comando scelto: ";
}

int ApplicationView::leggiComando() {
    int cmd;
    std::cin >> cmd; // Leggo il comando
    return cmd;
}

void ApplicationView::leggiDati(
    std::string& nome,
    std::string& cognome,
    std::string& data,
    std::string& luogo,
    std::string& cf
) {
    // Serve a pulire il buffer dopo cin >> cmd
    std::cin.ignore();

    // Uso getline per leggere anche le stringhe con spazi
    std::cout << "Nome: ";
    std::getline(std::cin, nome);

    std::cout << "Cognome: ";
    std::getline(std::cin, cognome);

    std::cout << "Data di nascita: ";
    std::getline(std::cin, data);

    std::cout << "Luogo di nascita: ";
    std::getline(std::cin, luogo);

    std::cout << "Codice fiscale: ";
    std::getline(std::cin, cf);
}


//void ApplicationView::initialize(){ controller = makeController();}
//MVC::Controller* MVC::View::makeController() { return new MVC::Controller(this); }

