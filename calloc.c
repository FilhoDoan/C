#include <stdio.h>
#include <stdlib.h>

int main(){
/*
Aloca memoria para arrays, com A elementos e tamanho N calloc(A,N)
Retorna o ponteiro de memoria alocada
Retorna null em caso de erro 
Detecta overflow(A*N > capacidade)
Retorna null ou um ponteiro caso a quantidade ser zero
A memoria é inicializada como zero
*/
int *p = calloc(5, sizeof(int));
Free(p);

}