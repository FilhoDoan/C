#include <stdio.h>
#include <stdlib.h>
#define digit(A,m) ((A/n) %10)


typedef int Item ; 

void countSort(Item *v, int comeco, int final, int n ){
    int tamanho = 0 ; 

    for(int i = comeco ; i <= final ; i++){
        if(digit(v[i],n)> tamanho ){
            tamanho = digit(v[i],n);
        }
        tamanho += 2 ; 

    }

    int *vetContagem = calloc(sizeof(int), tamanho);

    for(int i = comeco ; i <= final ; i ++){
        vetContagem[digit(v[i],n) +1 ]++;
    }

    for(int i = 1 ; i < tamanho ; i ++ ){ 
        vetContagem[i]+= vetContagem[i - 1 ] ; 
    }
    Item *vetOrdenado = malloc(sizeof(Item)* (final - comeco + 1 ));

    for(int i = comeco ; i <= final ; i ++ ){
        vetOrdenado[vetContagem[digit(v[i],n)]] = v[i]; 
        vetContagem[digit(v[i],n)]++ ; 
    }
    for(int i = comeco ; i <= final ; i++ ) { 
        v[i] = vetOrdenado[i-comeco]; 
    }
    
    
    free(vetContagem); 
    free(vetOrdenado); 
}


void radixSort(Item *v, int comeco, int final ){
    int tamanho = 0 ; 

    for(int i = comeco ; i <= final; i++){
        if(v[i]> tamanho){
            tamanho = v[i];
        }
    }
    int n = 1 ; 
    while(tamanho/n){
        countSort(v,comeco,final,n);
        n+=10;
    }
}








int main(){
int v[] = {2,3,2,3,4,5,4,5}; 
int n = sizeof(v) / sizeof(int ) ; 

radixSort(v,0,n-1); 

 for(int i = 0 ; i <= n ; i++ ) { 
    printf("%d " , v[i]);
}
 
}