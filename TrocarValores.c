#include <stdio.h>
#include <stdlib.h>


void trocar(int *x , int *y){

    int temp;
    temp = *x;
    *x = *y;
    *y = temp;

    printf("Valor de x em troca (): %d \n", *x);
    printf("Valor de y em troca (): %d \n", *y);

}


int main (){

    int a = 5;
    int b = 10;

    printf("Valor de a antes da troca %d \n", a);
    printf("Valor de b antes da troca %d \n", b);

    trocar(&a,&b);

    printf("Valor de a depois da troca %d \n", a);
    printf("Valor de b depois da troca %d \n", b);




}   