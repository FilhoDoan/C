#include <stdio.h>
#include <stdlib.h>

typedef struct no
{
    int dados;
    struct no *proxEsq, *proxDir;
} No;

typedef struct arvore
{
    No *raiz;
} ArvoreBinaria;

void emOrdem(No *raiz)
{
    if (raiz != NULL)
    {
        printf("%d ", raiz->dados);
        emOrdem(raiz->proxEsq);
        emOrdem(raiz->proxDir);
    }
}
void posOrdem(No *raiz)
{
    posOrdem(raiz->proxEsq);
    posOrdem(raiz->proxDir);
    printf("%d", raiz->dados);
}

void preOrdem(No *raiz)
{
    printf("%d", raiz->dados);
    preOrdem(raiz->proxEsq);
    preOrdem(raiz->proxDir);
}

void emOrdemIterativo(No *raiz)
{
    No *pilha;
    pilha = criarPilha();
    empilhar = (pilha, raiz);

    while (!pilhavaiza(pilha))
    {
        raiz = desimpilha(pilha);
        if(raiz!= NULL){
            empilha(pilha, raiz->dados);
            empilha(pilha, raiz->proxEsq); 

        }
    }
    destruirpilha(pilha);
}
