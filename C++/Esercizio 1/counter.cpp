#include "counter.h"
#include <iostream>

using namespace std;

Counter::Counter(){
    cout << "Metodo costruttore \n";
        value = 0;
};

Counter::~Counter(){
    cout <<  "Oggetto distrutto \n";
};

int Counter::getValue (){
    return value;
};

void Counter::increase (int n){
    value += n;
};
