#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int dado;
    struct no *esq, *dir;
} no;

typedef struct {
    no **array;
    int tamanho;
    int topo;
} Pilha;

Pilha *criarPilha(int tamanho) {
    Pilha *pilha = (Pilha *)malloc(sizeof(Pilha));
    pilha->array = (no **)malloc(tamanho * sizeof(no *));
    pilha->tamanho = tamanho;
    pilha->topo = -1;
    return pilha;
}

void empilhar(Pilha *pilha, no *elemento) {
    if (pilha->topo == pilha->tamanho - 1) {
        // Pilha cheia, você pode redimensionar ou tratar de outra forma
        fprintf(stderr, "Erro: pilha cheia\n");
        return;
    }
    pilha->array[++pilha->topo] = elemento;
}

no *desempilhar(Pilha *pilha) {
    if (pilha->topo == -1) {
        // Pilha vazia, você pode tratar de outra forma, como retornar NULL
        fprintf(stderr, "Erro: pilha vazia\n");
        return NULL;
    }
    return pilha->array[pilha->topo--];
}

void pre_ordem(no *raiz) {
    if (raiz == NULL)
        return;

    Pilha *pilha = criarPilha(100); // Pilha para armazenar os nós

    empilhar(pilha, raiz);

    while (pilha->topo != -1) {
        no *atual = desempilhar(pilha);
        printf("%d ", atual->dado);

        // Empilhar o nó da direita antes do nó da esquerda
        if (atual->dir != NULL) {
            empilhar(pilha, atual->dir);
        }

        if (atual->esq != NULL) {
            empilhar(pilha, atual->esq);
        }
    }

    free(pilha->array);
    free(pilha);
}