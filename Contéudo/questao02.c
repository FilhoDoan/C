#include <stdio.h>
#include <stdlib.h>

typedef struct no
{
    int dado;
    struct no *proxEsq, *proxDir;
} No;

No criarNo(No *esquerdo, No *direito, int dado)
{
    No *novoNo = malloc(sizeof(No));
    novoNo->proxEsq = esquerdo;
    novoNo->proxDir = direito;
    novoNo->dado = dado;
    return novoNo;
}

No procurarNo(No *raiz, int dadoProcurado)
{
    if (raiz == NULL || raiz == dadoProcurado)
    {
        return raiz;
    }
    if (dadoProcurado < raiz->dado)
    {
        return procurarNo(raiz->proxEsq, dadoProcurado);
    }else {
        return procurarNo(raiz->proxDir, dadoProcurado);
    }
}

No *procurarNo(){
    
}



No *inserir(No *no, int dado)
{
    if (no == = NULL)
        return
}
