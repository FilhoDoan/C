#include <stdio.h>

int main(){
    int a[3][2] = {{1 ,2}, {3,4}, {5,6}};
    int linha,coluna;    

    for(linha = 0 ;linha < 3 ; linha++ ){  
        for(coluna = 0; coluna < 2; coluna ++){
            printf("%5d", a[linha][coluna]);
                                 
        }
    }

    
}