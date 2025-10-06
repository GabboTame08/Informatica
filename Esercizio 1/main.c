/*
Dichiara una variabile di un tipo a tua scelta (tranne int) e associagli un puntatore, infine stampa il valore puntato utilizzando l'operatore di de-referenziazione.
*/
#include <stdio.h>


int main (){
    
    float x = 4.6f;
    float *ptr = &x;

    printf("%.2f", *ptr );

    return 0;

}