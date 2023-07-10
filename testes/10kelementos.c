#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 1000

void generateRandomArray(int arr[], int size) {
    srand(time(NULL));  // Inicializa o gerador de números aleatórios com uma semente baseada no tempo atual
    for (int i = 0; i < size; i++) {
        arr[i] = rand();
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}



void insertionSortO(int v[], int l , int r ){
    for(int i = r; i > l; i--){
        if(v[i] < v[i-1]){
            int aux = v[i-1];
            v[i-1] = v[i];
            v[i] = aux;
        }
    }
    for(int i = l+2; i <=r; i++){
       int j = i; int tmp = v[j];
       while(tmp < v[j-1]){
            v[j] = v[j-1];
            j--;
       }
       tmp = v[j];
    }   
}

void bubbleSort(int v[], int l ,int r ){

    for(int i = l; i <r ; i++){
        for(int j = l ; j < r ; j++){
            if(v[j] > v[j+1]){
                int aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }


}
int main() {
    int vetor[SIZE];
    int n = sizeof(vetor) / sizeof(vetor[0]);
    int r = n-1 ; 
    int l = 0 ;

/* 
insertionSortO(vetor, l, r);
printArray(vetor, SIZ E);*/

bubbleSort(vetor, l, r);
printArray(vetor,n);

  /*   generateRandomArray(vetor, SIZE); */


    /* printf("Números no vetor:\n");
    printArray(vetor, SIZE);
     */

    
    return 0;
}
