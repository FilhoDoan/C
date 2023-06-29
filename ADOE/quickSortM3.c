#include <stdio.h>
#define key(A) A
#define less(A, B) (key(A) < key(B))
#define exch(A, B) { int t=A; A=B; B=t; }
#define compexch(A, B) if(less(B, A)) exch(A, B)


int partition(int v[], int l, int r ){

    int pivo = v[r];
    int j = l;


    for(int k = l ; k < r ; k++){
        if(v[k] < pivo){
            int aux = v[k];
            v[k] = v[j];
            v[j] = aux;
        }
    }
    int aux2 = v[j];
    v[j] = v[r];
    v[r] = aux2;
    return j ; 

}

void quickSortM3(int v[], int l, int r){
    int j;
    if(r<=l) return;
    /* //inicio meio
    if(v[l] <  v[(l+r)/2]){
        int aux2 = v[l];
        v[l]= v[(l+r)/2];
        v[(l+r)/2] = aux2;
    }
    //meio fim
    if(v[l] < v[r]){
        int aux =  v[l];
        v[l] = v[r];
        v[r] = aux; 
    }
    //inicio fim 
    if(v[r] < v[(l+r)/2]){
        int aux3 = v[r];
        v[r]= v[(l+r)/2];
        v[(l+r)/2] = aux3;
    }
     */
    compexch(v[l], v[(l+r)/2]);
    compexch(v[l], v[r]);
    compexch(v[r], v[(l+r)/2]);


    j = partition(v,l,r);
    quickSortM3(v,l,j-1);
    quickSortM3(v,j+1,r);


}

void showVet(int v[], int n){
    for(int i = 0 ; i < n ; i ++){
        printf("%d " , v[i]);
    }   printf("\n");
}


int main(){

int v[]= {40,10,6,80,90,7,12};
int n = sizeof(v) / sizeof(v[0]);
int l = 0 ; 
int r = n-1;

quickSortM3(v,l,r);
showVet(v,n);

}
