#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int *v;   // Vetor que contem os elementos da pilha
    int N;    // Tamanho de v
    int topo; // Indicador do topo
} pilha;

void empilha(pilha *p, int x)
{
    if (p->v == NULL)
        return 0;

    if (p->topo == p->N)
    {
        int novoTamanho = p->N * 2;
        int *novoDado = realloc(p->v, novoTamanho * sizeof(int));

        if (novoDado == NULL)
            return;

        p->v = novoDado;
        p->N = novoTamanho;
    }

    p->v[p->topo] = x;
    p->topo++;
}

int desempilha(pilha *p, int *y)
{

    if (p->topo == 0)
        return 0;
    p->topo -= 1;
    *y = p->v[p->topo];
    return 1;
}
