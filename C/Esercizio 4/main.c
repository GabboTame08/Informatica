/*
Crea una funzione che data in input una stringa, restituisce la lunghezza della stringa!

prototipo funzione: 

int calcolaLunghezzaStringa(const char *stringa);
*/


int calcolaLunghezzaStringa(const char *stringa){
    int len=0;

    while(*stringa!='\0'){
        len++;
        stringa++; //aumneto il puntatore non l'indirizzo fino al '\0'

    }
    return len;
}


#include <stdio.h>

int main (){
printf("La stringa e' lunga: %d", calcolaLunghezzaStringa("Ciao"));

return 0;

}