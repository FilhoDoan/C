#include <stdio.h>

typedef struct {
    int *dados;
    int topo;
    int capacidade;
} Pilha;

Pilha *criarPilha(int capacidade) {
    Pilha *pilha = (Pilha *)malloc(sizeof(Pilha));
    pilha->capacidade = capacidade;
    pilha->topo = -1;
    pilha->dados = (int *)malloc(capacidade * sizeof(int));
    return pilha;
}

void empilhar(Pilha *pilha, int carta) {
    if (pilha->topo == pilha->capacidade - 1) {
        // Redimensionar a pilha se estiver cheia
        pilha->capacidade *= 2;
        pilha->dados = realloc(pilha->dados, pilha->capacidade * sizeof(int));
    }

    pilha->dados[++pilha->topo] = carta;
}

int desempilhar(Pilha *pilha) {
    if (pilha->topo == -1) {
        return -1; // Pilha vazia
    }

    return pilha->dados[pilha->topo--];
}

int main() {
    int n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    Pilha *pilha = criarPilha(n);
    Pilha *descartadas = criarPilha(n);

    // Empilhar as cartas na ordem inversa (da base para o topo)
    for (int i = n; i >= 1; i--) {
        empilhar(pilha, i);
    }

    printf("Cartas descartadas: ");
    while (pilha->topo >= 1) {
        int cartaDescartada = desempilhar(pilha);
        printf("%d, ", cartaDescartada);
        empilhar(descartadas, desempilhar(pilha)); // Mover a próxima carta para a base
    }

    printf("\nCarta restante: %d\n", desempilhar(descartadas));

    free(pilha->dados);
    free(pilha);
    free(descartadas->dados);
    free(descartadas);

    return 0;
}
