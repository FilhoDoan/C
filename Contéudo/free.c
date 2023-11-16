#include <stdio.h>
#include <stdlib.h>


int main(){
/* 
 Libera o espaço previamente alocado apontado por um ponteiro
 Não se esqueça de liberar a memoria 
 Chamadas repetidas para o mesmo valor : erro inesperado
 Não retorna valor

 */

 int *ponteiro = malloc(sizeof(int));
 free(ponteiro);

}
