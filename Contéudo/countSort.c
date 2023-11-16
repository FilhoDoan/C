#include <stdio.h>
#include <stdlib.h>
/*
vetor com repetições
[1,2,3,4,2,1,3,4,1,2]

vetor contando o index que cada numero começa depois do outro

*/



typedef int Item ; 
void countSort(Item *v, int comeco, int final ){
    
    int tamVetOriginal = 0; // Começando em 0 
    for(int i = comeco; i <= final ; i++ ){
        if(v[i] > tamVetOriginal  ){
            tamVetOriginal = v[i];
        }
    } 
    tamVetOriginal += 2;

    int *vetAux = calloc(sizeof(int), tamVetOriginal);
    
    for(int i = comeco ; i <= final; i++){
        vetAux[v[i] + 1]++;
    }
    for(int i = 1 ; i < tamVetOriginal ; i++){ 
        vetAux[i] += vetAux[i-1];
    } 
    Item *vetOrdenado = malloc(sizeof(Item) * (final - comeco + 1));
    
    for(int i = comeco ; i <= final ; i ++){
        vetOrdenado[vetAux[v[i]]] = v[i]; 
        vetAux[v[i]]++;
    }
    for(int i = comeco ; i <= final ; i++){
        v[i] = vetOrdenado[i - comeco];

    }
    free(vetAux);
    free(vetOrdenado);
}   

int main(){
 int v[] = {1,2,4,1,2,1,4,1,2};

 int n = sizeof(v)/sizeof(int);

 countSort(v, 0, n-1);

    for(int i = 0 ; i <= n ; i ++){
        printf("%d " , v[i]);
    }
}