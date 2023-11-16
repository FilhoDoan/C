/*
#include <stdio.h>


void movexs(char *palavra){
//condicao de para = final da string 
    if(*palavra == '\0'){
        return;  // Aqui quando ele chegar no final da string ele desempilha tudo o que está nela 
    }
    else if (*palavra == 'x'){
        movexs(palavra + 1);
        printf("x");   
        
    }else{
        printf("%c", *palavra);
        movexs(palavra+1);
        
    }
}


int main () {

    char palavras[101]; 

    scanf("%s", palavras);
    
    movexs(palavras); 
    
    printf("\n");



} 

*/

#include <stdio.h>
#include <string.h>

void moveXsRecursive(char *str, int start, int end) {
    if (start >= end) {
        return;
    }

    if (str[start] == 'x') {

        memmove(&str[start], &str[start + 1], end - start);
        str[end] = 'x';
        moveXsRecursive(str, start, end - 1);
    } else {
        moveXsRecursive(str, start + 1, end);
    }
}

int main() {
    char str[1000]; 

    scanf("%s", str);

    int len = strlen(str);

    moveXsRecursive(str, 0, len - 1);

    printf("%s\n", str);

    return 0;
}