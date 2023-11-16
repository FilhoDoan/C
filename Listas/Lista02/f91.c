#include <stdio.h>
 //numero <= 100 será modificado
 // se n >= 101 -> f91(n) = n - 10
 // se n <= 100 -> f91(n) = f91(f91(n+11))

int f91(int n ){
    if(n >= 101){
    return n - 10; 
    }
    return f91(f91(n+11));
}

int main(){
int n;
while(scanf("%d",&n)> 0 && n!= 0 ){
    printf("f91(%d) = %d\n", n, f91(n));
}
}
