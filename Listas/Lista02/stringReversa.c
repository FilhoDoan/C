#include <stdio.h>
#include <string.h>


void Reverse(char *palavra, int comeco, int final  ){
    if(comeco >= final ) return ;  

    char aux = palavra[final]; 
    palavra[final] = palavra[comeco]; 
    palavra[comeco] = aux ;  
     
    Reverse(palavra, comeco + 1, final - 1 );
 
}



int main () { 
char palavra[510];

scanf("%s", palavra);

int tamanho = strlen(palavra); 
int comeco, final ; 
comeco = 0 ;
final = tamanho -1;   

Reverse(palavra,comeco, final); 

printf("%s", palavra);
return 0 ; 
} 


