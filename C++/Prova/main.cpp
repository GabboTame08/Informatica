#include <fstream>
#include <iostream>

using namespace std;

int main(){

    string var, x;

    ifstream fin("prova.txt");

    ofstream fout("prova.txt", ios::app);
    
    fin >> var;
    cout << var;

    cin >> x;
    fout << x;

    cout << var << x;

    return 0;
}