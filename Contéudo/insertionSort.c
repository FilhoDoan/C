#include <stdio.h>

void showVet(int v[], int n){
    for(int i = 0 ; i < n ; i ++){
        printf("%d " , v[i]);
    } printf("\n");
}

void insertionSort(int v[], int l , int r){
    for(int i = l+1 ; i <= r ; i++){
        for(int j = i; j > l ; j--){
            if(v[j] < v[j-1]){
                int aux = v[j];
                v[j] = v[j-1];
                v[j-1] = aux;
            }
        }
    }
}

int main(){

int v[] = {30, 40, 20,10,15, 5};
int n = sizeof(v) / sizeof(v[0]);
int r = n-1 ; 
int l = 0 ;



insertionSort(v,l,r);
showVet(v,n);
/* insertionSortPlus(v,l,r);
mostrarVetor(v, n);
 */
}