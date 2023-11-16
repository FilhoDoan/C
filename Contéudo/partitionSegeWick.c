//escolher um pivo e dividir os menos a esqueda e maior
#include <stdio.h>

int partitionSadlinkwick(int v[], int l , int r){
    int  i = l-1, j = r, pivo = v[r];

    for(;;){

        while(v[++i] < pivo){
        
        }
        while(pivo < v[--j]){
            if(j ==l){
                break;
            }
            if(i>-j){
                break;
            }
            int aux = v[i];
            v[i]=v[j];
            v[j]=aux;
        }
        int aux2 = v[i];
        v[i] = v[r];
        v[r] = aux2;
        return i ;
    }
}


void quickSort(int v[], int l ,int r){

    int j;
    if(r<=l) return;

    j = partitionSadlinkwick(v,l,r);
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









