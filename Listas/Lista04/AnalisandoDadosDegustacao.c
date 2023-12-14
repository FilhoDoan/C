#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// Define a struct to hold the output data
typedef struct {
    int ocorrencias;
    int posicao;
    char caractere;
} Sequencia;

// Função para realizar o merge sort
void merge(Sequencia *array, int esquerda, int meio, int direita){
    Sequencia *tempArray = malloc(sizeof(Sequencia)*(direita - esquerda + 1));
    int indiceTemp = 0;
    int i = esquerda;
    int j = meio + 1;

    // Mescla duas submatrizes classificadas em array para tempArray
    while(i <= meio && j <= direita){
        if(array[i].ocorrencias < array[j].ocorrencias){
            tempArray[indiceTemp++] = array[i++];
        } else {
            tempArray[indiceTemp++] = array[j++];
        }
    }

    // Copia quaisquer elementos restantes no lado esquerdo
    while(i <= meio) tempArray[indiceTemp++] = array[i++];

    // Copia quaisquer elementos restantes no lado direito
    while(j <= direita) tempArray[indiceTemp++] = array[j++];

    // Copia tempArray ordenado de volta para o array principal
    indiceTemp = 0;
    for(i = esquerda; i <= direita; i++){
        array[i] = tempArray[indiceTemp++];
    }

    free(tempArray);
}

// Função para realizar o merge sort
void mergeSort(Sequencia *array, int esquerda, int direita){
    if(esquerda >= direita) return;
    int meio = (esquerda + direita) / 2;
    mergeSort(array, esquerda, meio);
    mergeSort(array, meio + 1, direita);
    merge(array, esquerda, meio, direita);
}

int main(){
    char frase[100001];
    scanf("%s", frase);
    int indiceAtual = 0;
    int indiceSaida = 0;
    Sequencia sequencias[strlen(frase)];
    sequencias[indiceSaida].ocorrencias = 0;

    for(int i = 0; i < strlen(frase); i++){
        if(frase[indiceAtual] != frase[i]){
            indiceAtual = i;
            indiceSaida++;
            sequencias[indiceSaida].ocorrencias = 0;
        }
        sequencias[indiceSaida].ocorrencias++;
        sequencias[indiceSaida].posicao = indiceAtual;
        sequencias[indiceSaida].caractere = frase[indiceAtual];
    }

    mergeSort(sequencias, 0, indiceSaida);

    for(int i = indiceSaida; i >= 0; i--){
        printf("%d %c %d\n", sequencias[i].ocorrencias, sequencias[i].caractere, sequencias[i].posicao);
    }

    return 0;
}
