#include <stdio.h>


int main(){
/*
thums, imprimir as linhas correspondentes a entrada
nas linhas pares imprimir 6 THUMS
nas linhas impares imprimir 3 THUMS

*/
 
int entrada;
scanf("%d", &entrada);
// == 5

int i = 1;

while(i <= entrada ){
    if(i % 2 == 0){
        printf("THUMS THUMS THUMS THUMS THUMS THUMS\n");
        
    }else {
        printf("THUMS THUMS THUMS\n");
    }i++;     
  }
}