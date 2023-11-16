#include <stdio.h>
#include <string.h> 


int pariamento(char *pares, int i ){
    int tamanho = strlen(pares); 
    int numPar = 0 ; 

    if( pares[i]  == '\0') return 0;    

    else if(i + 2 < tamanho && pares[i] == pares[i + 2]){
         
        return 1 + pariamento(pares, i + 1 ); 
        
    }   
        return 0 + pariamento(pares, i + 1 );

}

int main ()  {
    char pares[1000]; 

    scanf("%s", pares);
    printf("%d", pariamento(pares, 0 ));

}