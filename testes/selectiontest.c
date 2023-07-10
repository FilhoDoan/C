#include <stdio.h>

void swap(int *xp, int *yp) {
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void selection(int v[], int l, int r ){
    //for para percorrer todo o vetor
    for(int i = l; i<r; i++){

    int min = i;  
        //for para percorrer o vetor subordenado        
        for(int j = i+1; j <= r ; j++){
            if(v[min] > v[j]){
            min = j;
            }
        }
        swap(&v[i], &v[min]);
    }
}

void printArray(int arr[], int size) {
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int main() {
	int arr[] = {30,45,60,10,5,92};
	int n = sizeof(arr) / sizeof(arr[0]);
	int l = 0;
	int r = n - 1;

    printf("Antes: \n");
    printArray(arr, n);

    
	selection(arr, l, r);

	printf("Depois: \n");
	
    printArray(arr, n);

	return 0;
}

/*
#include <stdio.h>
#include <stdlib.h>

typedef int Item;

#define key(A) A
#define less(A, B) (key(A) < key(B))
#define exch(A, B) { Item t=A; A=B; B=t; }
#define compexch(A, B) if(less(B, A)) exch(A, B)


void swap(int *min, int*i){
    int aux;

    aux = *min;
    *min = *i;
    *i = aux; 

}

/* 

//Ribao
void selectionSort(Item *v, int l, int r){
    for(int i = l; i < r; i++){

    int min = i;

    for(int j = i+1; j <=r; j++){
        if(less(v[j],v[min])){
            min = j;
        }
        exch(v[min],v[l]);
    
    } 
        
    }

}

 */

/*
void selection_sort(int v[], int l, int r){
    int menor;

    for(int i=l; i<=r; i++){
        //procurar o menor para trocar com a primeira posicao
        //indice do menor elemento inicialmente
        menor = i;

        //procurar elemento menor
        for(int j=i+1; j<=r; j++) {
            if(v[j] < v[menor]) {
                menor = j;
            } 
        }
        //se achar um menor?    

        //exch(A, B) { Item t=A; A=B; B=t; }


       if(v[i] != v[menor]){            
            int a = v[i];
            v[i] = v[menor];
            v[menor] = a;
        }
      
    }
    
    
}


int main() {
    int v[] = {30, 45, 60, 10, 5, 92};
    int l = 0;
    int r;
    int n ; 
    selection_sort(v, 0, n-1);


}
*/