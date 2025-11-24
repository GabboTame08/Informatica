#include <iostream>
#include "GiaccheAvento.h"

using namespace std;

int main() {

    // creo una giacca a vento con taglia e percentuale chiusura di default
    GiaccheAVento g1;

    cout << "Taglia iniziale: " << g1.getTaglia() << endl;
    cout << "Chiusura iniziale: " << g1.getPercentualeChiusura() << "%" << endl;

    // imposto una nuova taglia
    g1.setTaglia(48);
    cout << "Nuova taglia: " << g1.getTaglia() << endl;

    // apro di 20%
    g1.apri(20);
    cout << "Dopo apertura di 20: " << g1.getPercentualeChiusura() << "%" << endl;

    // chiudo di 30%
    g1.chiudi(30);
    cout << "Dopo chiusura di 30: " << g1.getPercentualeChiusura() << "%" << endl;

    // apro completamente
    g1.apriTotalmente();
    cout << "Dopo apertura totale: " << g1.getPercentualeChiusura() << "%" << endl;

    // chiudo completamente
    g1.chiudiTotalmente();
    cout << "Dopo chiusura totale: " << g1.getPercentualeChiusura() << "%" << endl;

    return 0;
}
