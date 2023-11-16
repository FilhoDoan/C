#include <stdio.h>
#include <stdlib.h>

typedef struct celula
{
    int dado;
    struct celula *prox;
} celula;

void *enfileira(celula **f, int x)
{
    celula *novaFila;
    novaFila = malloc(sizeof(celula));
    novaFila->dado = x; 
    novaFila->prox = NULL;

}    

int desenfileira(celula *f, int *y)
{

    celula *primeira;
    primeira = f->prox;
    *y = primeira->dado;

    if (f->prox == f)
    {
        return 0;
    }
    else
    {

        f->prox = primeira->prox;
    }
    return 1;
}