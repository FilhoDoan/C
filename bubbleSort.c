#include <stdio.h>

//Pior caso quando o vetor está ordenado 
//algoritmo estavel

void swap(int *x, int *y){
    int aux = *x;
        *x = *y;
        *y = aux; 
}

void mostrarVetor(int v[], int n ){
    for(int i=0 ; i < n ; i++){
        printf("%d ", v[i]);
    } printf("\n");
}

void bubbleSort(int v[], int l , int r){
    for(int i = l ; i < r ; i ++){
        for(int j = l ; j < r ; j++){
            
            if(v[j] > v[j+1]){
                int aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;

            }
        }
    }
}

void bubbleSortD(int v[], int l , int r){
    for(int i = l ; i < r ; i ++ ){
        for(int j = l ; j <r ;j ++ ){
            if(v[j] < v[j+1]){
                int aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }
}

int main(){
int v[]= {5 ,10 ,20 ,90 };
int n = sizeof(v) / sizeof(v[0]);
int l = 0 ; 
int r = n-1;


printf("Crescente\n");
bubbleSort(v,l,r);
mostrarVetor(v,n);
 
printf("Decrescente\n");
bubbleSortD(v,l,r);
mostrarVetor(v,n); 


} 


