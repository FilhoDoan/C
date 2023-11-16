#include <stdio.h>
#include <stdlib.h>

typedef struct celula
{
    int dado;
    struct celula *prox;
} celula;

celula* busca(celula *le, int x)
{   
    celula *aux = le;
    while (aux->prox != NULL && aux->dado != x){
        aux->prox
    }
    return  aux->prox
}

celula *busca_rec(celula *le, int x)
{
    if (le == NULL|| le->dado == x){
        return le; 
    }
    else
    {
        return busca_rec(le->prox, x)
    }
}
