#include <stdio.h>
#include <stdlib.h>

int main(){
/*
Altera o tamanho do bloco de memoria apontado por um ponteiro
Conteudo anterior nao é afetado
Tamanho maior: memoria adicionada não é inicializada
Se o ponteiro é Null é apontado como uma nova porção de memoria
Se o ponteiro nao for NULL e a quantidade solicitada for zero, o espaço apontado é free
Retorna um ponteiro para a nova área alocada(pode ser a mesma ou diferente da  Original)
Retorna null em caso de erro
 - Bloco original não pe afetado, fica inalterado
 Retorna null ou um ponteiro em caso de quantidade ser zero



*/


int *p = malloc(sizeof(int));

p = realloc(p, 4*sizeof(int));



}