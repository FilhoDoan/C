#include <stdio.h>

int main(){
    

    int a;
    int b;
    int *ponteiroA;
    int *ponteiroB;
    

    scanf("%d", &a); // entrada do teclado 
    
    ponteiroA = &a; /* define que o ponteiroA vai ser igual
ao endereco de memoria = 6422296 , logo *ponteiroA = 6422296  */
    
    scanf("%d", &b); // entrada do teclado
    ponteiroB = &b; /* define que o ponteiroB vai ser igual
ao endereco de memoria = 6422288, logo *ponteiroB = 6422288 */
    
    printf("O conteudo do ponteiroA : %d || O endereco e : %d\n", *ponteiroA,ponteiroA);
    printf("O conteudo do ponteiroB : %d || O endereco e : %d\n", *ponteiroB,ponteiroB);

//printa             




}
    