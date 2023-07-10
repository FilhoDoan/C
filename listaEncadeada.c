#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int dados;
    struct No* prox;
} No;

No* criarNo(int dados) {
    No* novoNo = (No*)malloc(sizeof(No));
    novoNo->dados = dados;
    novoNo->prox = NULL;
    return novoNo;
}

void inserirInicioLista(No** cabeca, int dados) {
    No* novoNo = criarNo(dados);
    novoNo->prox = *cabeca;
    *cabeca = novoNo;
}

void inserirFimLista(No** cabeca, int dados) {
    No* novoNo = criarNo(dados);
    if (*cabeca == NULL) {
        *cabeca = novoNo;
        return;
    }

    No* atual = *cabeca;
    while (atual->prox != NULL) {
        atual = atual->prox;
    }
    atual->prox = novoNo;
}

void mostrarLista(No* cabeca) {
    No* atual = cabeca;
    while (atual != NULL) {
        printf("%d ", atual->dados);
        atual = atual->prox;
    }
    printf("\n");
}

int main() {
    No* cabeca = NULL;

    inserirInicioLista(&cabeca, 20);
    inserirFimLista(&cabeca, 10);

    mostrarLista(cabeca);

}
