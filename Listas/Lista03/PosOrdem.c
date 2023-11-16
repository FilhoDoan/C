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
void pos_ordem(no *raiz) {
    if (raiz == NULL) {
        return;
    }

    Pilha *pilha1 = criarPilha(100); // Pilha para empilhar nós
    Pilha *pilha2 = criarPilha(100); // Pilha para inverter a ordem de saída

    empilhar(pilha1, raiz);

    while (pilha1->topo != -1) {
        no *atual = desempilhar(pilha1);
        empilhar(pilha2, atual);

        if (atual->esq != NULL) {
            empilhar(pilha1, atual->esq);
        }

        if (atual->dir != NULL) {
            empilhar(pilha1, atual->dir);
        }
    }

    while (pilha2->topo != -1) {
        printf("%d ", desempilhar(pilha2)->dado);
    }

    free(pilha1->array);
    free(pilha1);
    free(pilha2->array);
    free(pilha2);
}