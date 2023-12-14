#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int elemento;
    int posicao;
} Par;

int comparar(const void *a, const void *b) {
    return ((Par *)a)->elemento - ((Par *)b)->elemento;
}

int busca_binaria(Par *array, int esquerda, int direita, int consulta) {
    while (esquerda <= direita) {
        int meio = esquerda + (direita - esquerda) / 2;
        if (array[meio].elemento == consulta)
            return array[meio].posicao;
        if (array[meio].elemento < consulta)
            esquerda = meio + 1;
        else
            direita = meio - 1;
    }
    return -1;
}

int main() {
    int tamanho, consultas;
    scanf("%d %d", &tamanho, &consultas);

    Par vetor[tamanho];
    for(int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i].elemento);
        vetor[i].posicao = i;
    }

    qsort(vetor, tamanho, sizeof(Par), comparar);

    for(int i = 0; i < consultas; i++) {
        int consulta;
        scanf("%d", &consulta);
        printf("%d\n", busca_binaria(vetor, 0, tamanho - 1, consulta));
    }

    return 0;
}
