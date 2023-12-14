#include <stdio.h>
#include <stdlib.h>


typedef int Item ; 

void countSort(Item *v, int comeco, int final){
    int tamanho = 0 ; 

    for(int i = comeco ; i <= final ; i++){
        if(v[i]> tamanho ){
            tamanho = v[i];
        }
        tamanho += 2 ; 
    }

    int *vetContagem = calloc(sizeof(int), tamanho);

    for(int i = comeco ; i <= final ; i ++){
        vetContagem[v[i] + 1 ]++;
    }

    for(int i = 1 ; i <= tamanho ; i ++ ){ 
        vetContagem[i]+= vetContagem[i - 1 ] ; 
    }
    Item *vetOrdenado = malloc(sizeof(Item)* (final - comeco + 1 ));

    for(int i = comeco ; i <= final ; i ++ ){
        vetOrdenado[vetContagem[v[i]]] = v[i]; 
        vetContagem[v[i]]++ ; 
    }
    for(int i = comeco ; i <= final ; i++ ) { 
        v[i] = vetOrdenado[i-comeco]; 
    }
    
    
    
    
    
    for(int i = comeco ; i <= final ; i++ ){
    printf("%d " , vetOrdenado[i]);
    }

    free(vetContagem); 
    free(vetOrdenado); 
}











int main(){
int v[] = {2,3,2,3,4,5,4,5}; 
int n = sizeof(v) / sizeof(int ) ; 

countSort(v, 0 , n-1);

/* for(int i = 0 ; i <= n ; i++ ) { 
    printf("%d " , v[i]);
}
 */
}