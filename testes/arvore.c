#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

typedef struct {
    int tamanho ;
    int *vetor; 

}vet; 

int calculationH(int sizeVet){
    int h ; 
    h = log2(sizeVet + 1);
    return h;  
}



void showInThree(vet *v){
        //printar a raiz 
        //if()
        printf(" %d\n", v->vetor[1]);
        printf("/");
} 


int main () { 

int v[] = {0,5,3,1,2,4};
int n = 6; 

vet newVetor;
newVetor.vetor = v; 
newVetor.tamanho = n; 

        printf("  %d\n", newVetor.vetor[1]);
        printf(" / ");
        printf("\\");
        printf("\n");
        printf("%d ", newVetor.vetor[2]);
        printf("  %d", newVetor.vetor[3]);
        printf("\n");
        printf("%d ", newVetor.vetor[4]);
        printf("\n");
    for(int i  = 2;  i< newVetor.tamanho; i++){

        
    }
}