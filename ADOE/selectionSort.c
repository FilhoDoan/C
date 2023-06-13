#include <stdio.h>

void swap(int *a, int*b){
    int aux = *a;
    *a = *b;
    *b = aux;

}

void selectionSort(int v[], int l, int r){

    for(int i = l; i < r ; i++){
        int min = i;
        for(int j = i +1; j <=r; j++){

            if(v[min] > v[j]){
                min = j;
            }
        }
        swap(&v[i],&v[min]);   
    }

}
void mostrarVetor(int v[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}   

int main(){
    int v[] = {30,45,60,10,5,92};
    int n = sizeof(v) / sizeof(v[0]);
    int l = 0 ;
    int r = n-1;


     printf("Antes: \n");
    mostrarVetor(v, n);

    
	selectionSort(v, l, r);

	printf("Depois: \n");
	
    mostrarVetor(v, n);



}