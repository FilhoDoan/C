#include <stdio.h>

void swapX(char *palavra, int endereco)
{

    if (palavra[endereco] == '\0') return;

    if (palavra[endereco] == 120)
        palavra[endereco] = 121;
    
    else if (palavra[endereco] == 88)
        palavra[endereco] = 89;

    swapX(palavra, endereco + 1); 

}

int main() {
    char palavra[100]; 
    scanf("%s", palavra);
    swapX(palavra,0);
    printf("%s\n", palavra); 


}
