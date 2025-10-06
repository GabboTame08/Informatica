//Crea un puntatore e fallo puntare ad una variabile di tipo int. Infine incrementa il valore della variabile utilizzando il puntatore.

#include <stdio.h>

int main(){

    int a = 4;

    int *ptr = &a;
    printf("%d\n", *ptr);
    (*ptr)++;
    printf("%d", a);

}