#include <stdio.h>

void showVet(int v[], int n ){
    for(int i = 0; i < n; i++){
        printf("%d ", v[i]);
    } printf("\n ");

}

void insertionSortH(int v[], int l, int r , int h){
    
    for(int i = l+h; i <=r; i++ ){
        int j = i; int tmp = v[j];
        while(j >= l+h && tmp < v[j-h]){
            v[j] = v[j-h];
            j-=h;
        }
        v[j] = tmp;
    }
}

void shellSort(int v[], int l, int r ){
    int h; 
    for(h =1; h <= (r-l)/9; h = 3*h +1) {
        for(; h > 0 ; h /=3){
            for(int i = l+h; i <=r; i++ ){
            int j = i; int tmp = v[j];
            while(j >= l+h && tmp < v[j-h]){
            v[j] = v[j-h];
            j-=h;
        }
        v[j] = tmp;
    }
        }
    }  
}





int main(){


int v[]= {40,10,6,80,90,7,12};
int n = sizeof(v) / sizeof(v[0]);
int l = 0 ; 
int r = n-1;


shellSort(v,l,r);
showVet(v,n);

}