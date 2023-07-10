#include <stdio.h>
#include <macros.h>


void showVet(int v[], int n ){
    for(int i = 0 ; i < n ; i++){
        printf("%d ", v[i]);

    }  printf("\n");

}

void insertionSortPlus(int v[], int l , int r ){
    for(int i = r; i > l ; i--) {
         if(v[i-1] > v[i]){
            int aux = v[i-1];
            v[i-1] = v[i];
            v[i] = aux ; 
         }
    }
    for(int i = l+2; i <=r ; i++) { 
        int j = i; int vtemp = v[j];
        while(vtemp < v[j-1]){
            v[j] = v[j-1];
            j--;
        }
        v[j] = vtemp;
    }
}

int main(){

int v[]= {40,10,6,80,90,7,12};
int n = sizeof(v) / sizeof(v[0]);
int l = 0 ; 
int r = n-1;

insertionSortPlus(v,l, r);
showVet(v,n);

}