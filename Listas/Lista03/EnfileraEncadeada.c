#include <stdio.h>
#include <stdlib.h>

typedef struct celula
{
    int dado;
    struct celula *prox;
} celula;

celula *enfileira(celula *f, int x)
{
    celula *novaFila;
    novaFila = malloc(sizeof(celula));
    novaFila->prox = f->prox;
    f->prox = novaFila;
    f->dado = x ;  
    return novaFila;
}