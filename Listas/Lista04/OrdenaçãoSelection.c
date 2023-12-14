#include <stdio.h>

void selectionSort(int vetor[], int tamanho)
{
    for (int j = 0 ; j < tamanho-1 ; j++){
        int elementMinimo = j;

        for (int i = j + 1; i < tamanho; i++){
            if ((vetor[i] < vetor[elementMinimo])){
                elementMinimo = i;
            }
        }
      int aux =  vetor[elementMinimo];
      vetor[elementMinimo] =vetor[j];
      vetor[j] = aux ; 
    }
}

int main() {
    int numeros[1000];
    int tamanho = 0;  

    while (scanf("%d", &numeros[tamanho]) != EOF) {
        tamanho++; 
    }

    selectionSort(numeros, tamanho);
    
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}