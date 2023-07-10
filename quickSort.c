//escolher um pivo e dividir os menos a esqueda e maior
#include <stdio.h>


int partition(int v[], int l, int r){    

    int pivo = v[r];
    int j= l;

    for(int k = l; k < r ; k++){
        if(v[k] < pivo){
            int aux = v[k];
            v[k] = v[j];
            v[j] = aux;
            j++;
        }

    }
        int aux2 = v[j];
        v[j] = v[r];
        v[r] = aux2;
        return j;
}

void quickSort(int v[], int l ,int r){

    int j;
    if(r<=l) return;

    j = partition(v,l,r);
    quickSort(v,l,j-1);
    quickSort(v,j+1,r);



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

quickSort(v,l,r);
showVet(v,n);

}









