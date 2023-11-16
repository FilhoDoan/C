#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;


void imprime (celula *le){
    celula *aux = le; 
    aux = aux->prox ; 
    while (aux != NULL)
    {
        printf("%d -> ", aux->dado);
        aux = aux->prox;
    }
    if(aux == NULL){
        printf("NULL\n");
    }

} 

void imprime_rec(celula *le){
    celula *aux = le; 
    if(aux == NULL){
        printf("NULL\n");
        return; 
    }
    if(aux->dado != 0){
        printf("%d -> ", aux->dado);
    }
    imprime_rec(aux->prox); 
}