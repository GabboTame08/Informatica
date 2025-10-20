#include "counter.h"
#include <iostream>

using namespace std;

int main(){

    Counter c1;
    
    cout << "Contatore 1: "<< c1.getValue() <<"\n";
    for(int i=0; i<100; i++){
        c1.increase(1);
        cout << "Contatore 1: "<< c1.getValue() <<"\n";
    }

    return 0;
}