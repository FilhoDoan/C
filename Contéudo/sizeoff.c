#include <stdio.h>
#include <stdlib.h>


int main (){
/* 
Computar o tamanho dos operadores
Tipos primitivos
Tipo de dados

Retorna size_t(dados em bytes)
sizeof(Tipo ||variavel);


*/

struct endereco {
    char rua [100];
    int numero;
};
    printf("%ld Bytes\n", sizeof(int));
    printf("%ld Bytes\n", sizeof(float));
    printf("%ld Bytes\n", sizeof(double));
    printf("%ld Bytes\n", sizeof(char));

}