#include <stdio.h>
#include <stdlib.h>

typedef struct fila
{
    int *dados;
    int N, p, u;
} fila;

int enfileira(fila *f, int x)
{
    if ((f->u + 1) % f->N == f->p)
    {
        return 0 ; 
    }
    else
    {
        f->dados[f->u] = x;
        f->u = (f->u + 1) % f->N;
        return 1;
    }
}
