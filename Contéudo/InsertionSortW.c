#include <stdio.h>
#define key(A) A
#define less(A, B) (key(A) < key(B))
#define exch(A, B) { int t=A; A=B; B=t; }
#define compexch(A, B) if(less(B, A)) exch(A, B)


void showVet(int v[], int n){
    for(int i = 0 ; i < n ; i ++){
        printf("%d " , v[i]);
    } printf("\n");
}

void insertionSortW(int *v, int tamanho){

    for(int i = 0 ; i < tamanho-1 ; i++){
        if(v[i] > v[i+1]){
            int aux = v[i+1];
            v[i+1] = v[i];
            v[i] = aux;

            int j = i-1;
            while(j >= 0){
                if(aux<v[j]){
                    v[j+1] = v[j];
                    v[j] = aux;
                }else break;
                j = j-1 ; 
            } 
            
        }

    }
}


int main(){

int v[] = {30, 40, 20,10,15, 5};
int n = sizeof(v) / sizeof(v[0]);
int r = n-1 ; 
int l = 0 ;



insertionSortW(v,n);
showVet(v,n);
/* insertionSortPlus(v,l,r);
mostrarVetor(v, n);
 */
}