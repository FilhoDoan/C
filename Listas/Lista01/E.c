#include <stdio.h>


int main(){

    int a , b , c; 

    scanf("%d %d %d",&a, &b ,&c);

   /*  1° quando A ganha, quando for diferente de b e c 
       2° quando B ganha, quando for diferente de a e c
       3° quando C ganha, quando for diferente de a e b 
       4° quando empata,  quando todos são iguais  
    */
        
        if(a != b && a != c){
            printf("A");
        }else if(b != a && b != c){
            printf("B");
        }else if(c != a && c != b){
            printf("C");
        }else{
            printf("Empate");
        }

     
        
    }