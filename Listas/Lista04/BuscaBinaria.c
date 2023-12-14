#include <stdio.h>

// Função de busca binária
int buscaBinaria(int vetor[], int tamanho, int alvo) {
    int esquerda = 0;
    int direita = tamanho - 1;

    while (esquerda <= direita) {
        int meio = esquerda + (direita - esquerda) / 2;

        // Se o alvo estiver no meio do vetor
        if (vetor[meio] < alvo) {
            esquerda = meio + 1;
        } else {
            direita = meio - 1;
        }
    }

    // Retorna o índice j tal que v[j − 1] < x ≤ v[j]
    return esquerda;
}

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int vetor[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < M; i++) {
        int alvo;
        scanf("%d", &alvo);
        int indice = buscaBinaria(vetor, N, alvo);
        printf("%d\n", indice);
    }

    return 0;
}
