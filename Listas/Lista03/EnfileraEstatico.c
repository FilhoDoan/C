#include <stdio.h>
#include <stdlib.h>

typedef struct fila
{
    int *dados;
    int N, p, u;
} fila;

int enfileira(fila *f, int x)
{
    if (f->u == f->N)
    {
        int *novaFila, novoTamanho;
        novoTamanho = f->N * 2;
        novaFila = realloc(f->dados, novoTamanho * sizeof(int));

        if (novaFila == NULL)
            return 0;

        f->dados = novaFila;
        f->N = novoTamanho;
    };
    f->dados[f->u] = x;
    f->u = (f->u + 1);
    return 1;
}