#include <stdio.h>
#include <stdlib.h>

typedef struct celula
{
    int dado;
    struct celula *prox;
} celula;

int empilha(celula *p, int x)
{
    celula *pNovo = malloc(sizeof(celula));

    if (pNovo == NULL)
    {
        return 0;
    }
    pNovo->dado = x;
    pNovo->prox = p->prox;
    p->prox = pNovo;

    return 1;
}


int empilha(celula *p, int x)
{
    celula *pNovo = malloc(sizeof(celula));

    if (pNovo == NULL)
    {
        return 0;
    }
    pNovo->dado = x;
    pNovo->prox = p->prox;
    p->prox = pNovo;

    return 1;
}