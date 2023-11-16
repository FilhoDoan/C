#include <stdio.h>
#include <math.h>

// 5! = 5 * 4 * 3 * 2 * 1 
// 5! = 5*(5-1)*(5-2)*(5-3)*(5-4)

int fatorialIterativo1(int n){
    int resultado = 1; 
        while( n > 0 ){
          resultado *= n;
          n--;
        }
    printf("%d\n", resultado ); 


}
// 5! = 5*(5-1)*(5-2)*(5-3)*(5-4)
int fatorialIterativo2(int n ){
    int resultado=1; 
     
    for(int i= 1 ; i <= n; i++ ){
    resultado *= i ; 
    printf("resultado %d %d\n", i, resultado);
    }
    printf("resultado final %d\n", resultado);
}

int fatorialRecursivo(int n ){
    int resultado;
    if(n == 0) return 1; 
    else {
        return  n*fatorialRecursivo(n-1); 
    }
}

int main(){

int n = 5;
int resultado; 

fatorialIterativo2(n);
resultado = fatorialRecursivo(n); 
printf("resultado recursivo %d\n", resultado); 

}