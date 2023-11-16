#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Troca os elementos de posição
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[1000];
    int n = 0;

    // Leitura dos números da entrada padrão
    while (scanf("%d", &arr[n]) != EOF) {
        n++;
    }

    // Ordena os números utilizando o Bubble Sort
    bubbleSort(arr, n);

    // Imprime os números ordenados
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
