#include <stdio.h>
#include <stdlib.h>

typedef struct pilha
{
    int *dados;
    int N, topo;
} pilha;

int empilha(pilha *p, int x)
{
    if (p->dados == NULL)
        return 0;

    if (p->topo == p->N)
    {
        int novoTamanho = p->N * 2;
        int *novoDado = realloc(p->dados, novoTamanho * sizeof(int));

        if (novoDado == NULL)
            return 0;

        p->dados = novoDado;
        p->N = novoTamanho;
    }

    p->dados[p->topo] = x;
    p->topo++;
    return 1;
}