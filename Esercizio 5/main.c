/*
Dato il seguente prototipo:  
int sommaArray(int *array, int dimensione);
creare un sottoprogramma che somma tutti gli elementi dell'array e lo restituisce in output
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sommaArray(int *array, int dimensione){
    int somma = 0;
    int i;
    for (i=0; i<dimensione; i++){
        somma = somma + array[i];
    }
    return somma;
}

int main(){
int vet [5] = {1, 2, 3, 4, 10};
int risultato = sommaArray(vet,5);
printf("La somma e': %d\n", risultato);


return 0;

}