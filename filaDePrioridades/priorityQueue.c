#include <stdio.h>
#include <stdlib.h>

/*  
Considerando um k percorrendo o vetor

Valores => [X | 50 | 30 | 40 | 10 | 20 ]
Indices => [0 | 1  | 2  |  3 |  4 | 5  ]

Pai = k/2
Filho = 2k, 2k+1

            Árvore Heap != Árvore de busca

       50
     /    \
   30      40
  / \
10   5

Notações (p)   = propriedade
         (an)  = anotação
         (n)   = notação
         (obs) = observação
*/

// associoando o Item ao int, para chamar Item ao inves de int
typedef int Item; 


/* 
Estrutura do Heap que uma estrutura com: 
- O tamanho da heap
- Ponteiro de vetor
*/
typedef struct 
{
  int size;
  Item *v;
}Heap ;


// recebe a capacidade do da estrutura heap
void pqInit(int capacity ){
  /* (p) alocação do  
     (obs) a capacidade + 1 pois desconsideramos o v[0] */
  Heap* newHeap = malloc(sizeof(Heap));
  
  /* (p) alocação do vetor que iremos usar para a heap 
     (obs) a capacidade + 1 pois desconsideramos o v[0] */
  newHeap->v = malloc(sizeof(Item)* (capacity +1)); 
} 

/*
(p) verificar se tá na raiz e se o pai é menor que o filho  
(an) FixUp Recursivo
*/
void fixUpRec(Heap *vet, int k ){
  /* (an) Ele retorna pois quando o numeoro esta na posição 1 do 
     vetor ele já é o que tem mais prioridade 
  */
  if(k <= 1 )return; 
  //(p) Se o pai for menor que o filho 
  if( k/2 < k){
    //(p) trocar = exch(vet.v[k/2], vet.v[k]);
    int aux = vet->v[k/2];
    vet->v[k/2] = vet->v[k];
    vet->v[k] = aux;
// recursividade da função 
  fixUpRec(vet, k/2);  
  }
}


//(an) FixUp Iterativo
void fixUpIt(Heap* h , int i ){
    while(i > 1 && h->v[i/2] < h->v[i]){
      //exch(h->v[i/2] ,h->v[i]);
      //isso aqui é um exch na mão 
      Item aux = h->v[i/2];
      h->v[i/2] = h->v[i];
      h->v[i] = aux;    
      i = i/2;
    }
}
/*
(p) recebe um vetor h e um inteiro i 
colocando o numero sempre no final do vetor e fazendo FixUp com
o pai até consertar a àrvore
*/

void insert(Heap *h , Item i){
  //inserindo no final
  h->v[h->size+1] = i;
  // aumentar o tamanho da heap
  h->size++;

  fixUpIt(h, h->size); //(obs) o h-> é igual ao tamanho de elementos 

}


//Vê se o tamanho da Heap é igual a zero ou não 
Item isEmpty(Heap *v){
  return v->size == 0 ; 
}
//retorna o topo da raiz ou o primeiro elemento do vetor 
Item raiz(Heap *vet){
  return vet->v[1];
}
//(obs) verificar o tamanho do vetor  
void fixDown(Heap *v , int i){
  int son; 
  //(p) Confirmação dos filhos   
  while(i*2 <= v->size){
    son = 2*i;
    /*
    (p) Verificação se o filho da direita tem mais prioridade
      e se o filho n  utrapassa o tamanho do vetor para fazer o mais +1
     */
    if(son != v->size && v->v[son] < v->v[son +1]){
    //muda a verificação pro filho da Direita   
      son++;   
    }
    //(p) se eu for menor que meu filho ele troca
    if(v->v[i] < v->v[son]){
      int aux = v->v[son];
      v->v[son] = v->v[i];
      v->v[i]=  aux;
      i = son;
    }else /*se o topo n for menor */{
      break;
    }
  }
}

void pop(Heap *v){
    int aux = v->v[1];
    v->v[1] = v->v[v->size];
    v->v[v->size] = aux;
//deixa o vetor com menos posições
    v->size--; 
    fixDown(v,1);
}

void showVet(int pq[], int n){
    for(int i = 0 ; i < n ; i ++){
        printf("%d " , pq[i]);
    }   printf("\n");
}

/*
Heap sort = remoção dos elementos de uma fila 
*/
// n log n
void heapFy(Heap *v){
  for(int i = v->size; i > 1; i--){
    fixUpIt(v,i);
  }
}


int main() {    
Item pq[] = {90, 10, 30, 40, 50};
int n = 4 ;
Heap heap;
heap.v = pq -1;
heap.size = n; 
Heap newHeap;
pqInit(n);

heapFy(&heap);
while(!isEmpty(&heap)){
  pop(&heap);
}
for(int i = 0 ; i < n ; i ++){

insert(&newHeap, pq[i]);
}

showVet(pq, n);

}
