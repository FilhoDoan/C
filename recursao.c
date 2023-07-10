#include <stdio.h>

int fibonacci(int n ){
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}
    
int main(){
/*
A propriedade daquilo que pode ser feito varias vezes
Dependencia entre elementos do conjunto
 -Elemento atual depende da determinação de um elemento anterior ou posterior
Condição de parada necessaria 
Empilha funções e se comportam como uma
Invocam a si mesmos

*/

int numero = 10;

printf("Sequencia %d\n",numero);

 for (int i = 0; i < numero; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");


}
 



    