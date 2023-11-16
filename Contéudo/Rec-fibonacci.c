#include <stdio.h>
#include <math.h>

int fibonacciIterativo1(int n ){
    int f= n ;
    int f1 = 1 ;
    int f2 = 0 ; 

    for(int i = 2 ; i <= n ; i++){
        f = f1 + f2;
        f2 = f1 ; 
        f1 = f ;

    printf("%d\n", f);
    }
}

int fibonacciRecursivo(int n ){
    if(n==0)return 0;
    if(n==1)return 1;
    return fibonacciRecursivo(n-1)+ fibonacciRecursivo(n-2);
}


int main () {

int n = 10;
fibonacciIterativo1(n);

}

