#include <stdio.h>

void swap(int *x, int *y){
    int aux = *x ; 
    *x = *y;
    *y = aux; 
}

void mostrarVetor(int v[], int n ){
    for(int i = 0 ; i < n ; i++){
        printf("%d ", v[i]);

    }  printf("\n");

}

void selectionSort(int v[], int l , int r){
    for(int i = l ; i < r ; i++){
            int min = i;
            for(int j =i+1 ; j <=r ; j++){
                if(v[j] < v[min]){
                min = j;
            }
        }
        int aux = v[i];
        v[i] = v[min];
        v[min] = aux;
    }
}

void selectionSortD(int v[], int l, int r){
    for(int i = l; i < r ; i++){

    int max = i;
        for(int j = i +1; j <=r ; j++){
            if(v[max] < v[j]){
            max = j;
            }
        }
        int aux = v[i];
        v[i] = v[max];
        v[max] = aux;
    }
}



int main(){

int v[]= {40,10,6,80,90,7,12};
int n = sizeof(v) / sizeof(v[0]);
int l = 0 ; 
int r = n-1;

printf("Crescente \n");

selectionSort(v,l,r);
mostrarVetor(v, n); 

printf("Decrescente \n");

selectionSortD(v,l,r);
mostrarVetor(v,n);

}