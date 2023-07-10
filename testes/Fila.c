#include <stdio.h>
#include <stdlib.h>
  
/*
teste de implementação da arvore heap com inserção fix up e fix Down

*/

typedef int Item;

typedef struct {
    int tamanho;
    Item *vetorArray;
}Heap;


void filaIniciar(int capacidade){
    //Alocar memoria da Heap
    Heap *novaHeap = malloc(sizeof(Heap));
    //Alocar memoria para o vetor
    novaHeap = malloc(sizeof(Item) * (capacidade + 1));
    novaHeap->tamanho = 0 ;
}

//Verificar se sou maior que meu pai e trocar
void fixUp(Heap *v, int i){
    
    int pai = i/2;
    while(i > 1 && v->vetorArray[pai] < v->vetorArray[i]){
        int aux = v->vetorArray[pai];
        v->vetorArray[pai] = v->vetorArray[i];
        v->vetorArray[i] = aux ; 
        i = pai;
    }
}

// ver se eu n sou maior que o tamanho do vetor , se o filho n é o tamanho do vetor
// fazer o less de pai e filho 
void fixDown(Heap *v , int i ){

    while (i*2 <= v->tamanho){   
        int filho = 2*i;
        //ve se o filho a direita é maior
        if(filho != v->tamanho && v->vetorArray[filho] < v->vetorArray[filho + 1]) {
        filho++;
        }
        if(v->vetorArray[i] < v->vetorArray[filho]){
            int aux = v->vetorArray[i];
            v->vetorArray[i] = v->vetorArray[filho];
            v->vetorArray[filho] = aux;
            i = filho;
        }else {
            break;
        }
    }
}

// inserir no final do vetor e subir fazendo fix up 

void filaIn(Heap *v, int i){
    v->vetorArray[v->tamanho ++];
    fixUp(v,v->tamanho);
}

void filaPop(Heap *v){
//trocar o primeiro com o ultimo
   int aux = v->vetorArray[1];
   v->vetorArray[1] = v->vetorArray[v->tamanho];
   v->vetorArray[v->tamanho] = aux;
   v->tamanho--;
   fixDown(v,1); 
}


int main(){
    
}