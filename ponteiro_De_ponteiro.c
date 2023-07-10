#include <stdio.h>

int main(){
    //variaveis 
    int a;
    //int b;
    // ponteiros 
    int *ponteiro1;
    int **ponteiro2;

    scanf("%d", &a);

    ponteiro1 = &a;            
    ponteiro2 = &ponteiro1;

    //printar o endereco de a 
    printf("Endereco de memoria de A : %d\n", &a);
    printf("Endereco de memoria de pont1 : %d\n", ponteiro1);
    printf("Endereco de memoria de pont2 : %d", ponteiro2);

    //printf("O conteudo e :%d O endereco e: %d", **ponteiro2, ponteiro2);


}