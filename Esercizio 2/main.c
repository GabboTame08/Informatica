//Utilizzando i puntatori e l'operatore di de-referenziazione scambia il valore di due variabili

#include <stdio.h>

int main(){

    int a = 2;
    int b = 4;
    int mezzo;

    int *ptr = &a;
    int *ptr1 = &b;
    
    mezzo = *ptr;
    *ptr = *ptr1;
    *ptr1 = mezzo;

    printf("%d\n", a);
    printf("%d", b);

    return 0;
}