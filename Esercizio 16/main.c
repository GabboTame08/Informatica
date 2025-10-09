/*
Definire una struct casa per memorizzare i dati delle case da parte di un’agenzia immobiliare, 
ogni casa è caratterizzata da un numero intero di metri quadri, dalla classe energetica (definita da una lettera, 
dove la A rappresenta la casa a minor consumo energetico la F quella a maggior consumo) e dal costo in migliaia di euro.
Chiedere all’utente i dati di tre case e poi dire qual è quella col minor costo al metro quadro e quella con la migliore classe energetica 
(in caso di parità di livello di classe energetica si riporti quella più grande).
*/

#include <stdio.h>

struct Casa {
    int mquadrati;
    char classe[1];
    double costo;

};


int main(){
    struct Casa c[3];

     for(int i=0;i<3;i++){
        printf("Inserisci la dimensione della casa numero %d in metri quadrati: ",i+1); 
        scanf("%d",&c[i].mquadrati);

        printf("Inserisci la classe energetica della casa numero %d: ",i+1);
        scanf("%s",&c[i].classe);

        printf("Inserisci il costo della casa numero %d: ",i+1);
        scanf("%lf",&c[i].costo);
    }
return 0;

}