#include <stdio.h>
#include <stdlib.h>

typedef struct celula
{
    int dado;
    struct celula *prox;
} celula;

int desenfileira(celula *f, int *y)
{
    celula *primeira;
    primeira = f->prox;
    *y = primeira->dado;
    f->prox = primeira->prox;
    free(primeira);
    return y;
}