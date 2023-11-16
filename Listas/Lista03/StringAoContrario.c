#include <stdio.h>
#include <string.h>

void StringReversa(char *palavra, int p, int u, int N)
{
    int i, j;

    if (u <= p)
        return;

    for (i = 0, j = N - 1; i < j; i++, j--)
    {
        char aux = palavra[i];
        palavra[i] = palavra[j];
        palavra[j] = aux;
    }
}

int main()
{

    char palavra[520];

    scanf("%s", palavra);

    int N = strlen(palavra);
    int u, p;

    StringReversa(palavra, 0, (N - 1), N);
    printf("%s", palavra);
    return 0;
}


/* 
#include <stdio.h>
#include <string.h>


void Reverse(char *palavra, int p, int u  ){
    if(p >= u ) return ;  

    char aux = palavra[u]; 
    palavra[u] = palavra[p]; 
    palavra[p] = aux ;  
     
    Reverse(palavra, p + 1, u - 1 );
 
}

 */

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


