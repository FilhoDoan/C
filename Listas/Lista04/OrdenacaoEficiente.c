#include <stdio.h>
#include <stdlib.h>

// Função para mesclar dois subvetores de arr[]
void merge(int arr[], int left, int middle, int right) {
    int i, j, k;
    int n1 = middle - left + 1;
    int n2 = right - middle;

    // Cria vetores temporários
    int L[n1], R[n2];

    // Copia os dados para os vetores temporários L[] e R[]
    for (i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[middle + 1 + j];

    // Mescla os vetores temporários de volta para arr[]

    i = 0;  // Índice inicial do primeiro subvetor
    j = 0;  // Índice inicial do segundo subvetor
    k = left;  // Índice inicial do subvetor mesclado
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copia os elementos restantes de L[], se houver algum
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copia os elementos restantes de R[], se houver algum
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Função principal do algoritmo Merge Sort
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        // Encontra o ponto médio do vetor
        int middle = left + (right - left) / 2;

        // Chama a função recursivamente para ordenar a metade esquerda
        mergeSort(arr, left, middle);
        // Chama a função recursivamente para ordenar a metade direita
        mergeSort(arr, middle + 1, right);

        // Mescla as metades ordenadas
        merge(arr, left, middle, right);
    }
}

int main() {
    int n;
    scanf("%d", &n); // Lê a quantidade de elementos

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Lê os elementos do vetor
    }

    // Chama a função de ordenação (Merge Sort)
    mergeSort(arr, 0, n - 1);

    // Imprime os elementos ordenados
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
