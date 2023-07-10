#include <stdio.h>
 

void showVet(int v[], int n){
    for(int i = 0; i < n; i ++){
        printf("%d ", v[i]);
    }
    printf("\n");
}

//Crescentes
void selectionSort(int v[], int l, int r){
    
    for(int i = l ; i < r ; i++){
        int min = i;
        for(int j = i+1; j <=r ; j++){
            if((v[j] < v[min])){
                min = j ; 
            }
        }
        int aux = v[i];
        v[i] = v[min]; 
        v[min] = aux;
    }
}

void bubbleSort(int v[], int l , int r ){
    
    for(int i = l ; i < r ; i++){
        for(int j =l+1 ; j < r ; j++){
            if(v[j]  >  v[j+1]){
                int aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }
}


void insertionSort(int v[], int l ,int r ){

    for(int i = l+1 ; i <= r ; i ++){
        for(int j = i;  j > l ; j--){
            if(v[j] < v[j-1]){
                int aux = v[j];
                v[j] = v[j-1];
                v[j-1] = aux ; 
            }
        }

    }

}

void insertionSortOpti(int v[], int l, int r){

    for(int j = l +1; j > l ;j--){
        if(v[j] < v[j-1]){
            int aux = v[j];
            v[j] = v[j-1];
            v[j-1] = aux;
        }
    }
    for(int i = l+2; i<=r; i++){
        int j = i; int tmp = v[j];
        while(tmp < v[j-1]){
            v[j] = v[j-1];
            j--;
        }
        v[j] = tmp;
    }
}

void shellSort(int v[], int l, int r){




}

int partition(int v[], int l , int r){
    int pivo = v[r];
    int j = l;

    for(int k = l ; k < r ; k ++){

        if(v[k] < pivo){
            int aux = v[k];
            v[k] = v[j];
            v[j] = aux;
            j++;
        }
    }
    int aux2 = v[j];
    v[j] = v[r];
    v[r]= aux2;
    return j ;
}

void quickSort(int v[], int l, int r){
    int j;
    if(r<=l) return;
    j = partition(v,l,r);
   quickSort(v,l, j-1); 
   quickSort(v,j+1,r);  

}

//Descrescentes
void selectionSortD(int v[], int l ,int r){
    for(int i = l ; i < r ; i ++ ){
        int min  = i ; 
        for(int j = i +1 ; j <= r ; j ++){
            if(v[j] > v[min]){
                min = j;
            }

        }
        int aux = v[i];
        v[i] = v[min];
        v[min] = aux;
    }
}

void bubbleSortD(int v[], int l, int r ){
    for(int i = l; i < r ; i ++){
        for(int j = l ; j < r ; j++){
            if(v[j] < v[j+1] ){
                int aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }    
}

void insertionSortD(int v[], int l , int r  ){

    for(int i = l=1 ; i <= r; i++){
        for(int j = i ; j > l ; j--){
            if(v[j] > v[j-1]){
                int aux = v[j];
                v[j] = v[j-1];
                v[j-1] = aux; 
            }
        }
    }
}





int main(){

int v[] = {70, 5,20,6,90};
int n = sizeof(v) / sizeof(v[0]);
int r = n-1;
int l =0;

printf(" Crescentes \n");
selectionSort(v,l,r);
showVet(v,n);

bubbleSort(v,l,r);
showVet(v,n);

insertionSort(v,l,r);
showVet(v,n);


quickSort(v,l,r);
showVet(v,n);

printf("Decrescente \n");

selectionSortD(v,l,r);
showVet(v,n);


bubbleSortD(v,l,r);
showVet(v,n);

insertionSortD(v,l,r);
showVet(v,n);

}