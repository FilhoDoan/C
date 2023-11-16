#include <stdio.h>
/*
**Fazer uma calculadora com operações de soma e subtração

Exemplo de Entrada:

3----------------------> numero de operadores a serem avaliados 
3+7-22-----------------> Operação
3
5-10-77
10
1+2+3+4+5+6+7+8+9+10
0

Exemplos de Saída

Teste 1 ---------------> Numero do teste "teste n"
-12     ---------------> Resultado da operação
|\n\n|  ---------------> espaço em braco

Teste 2
-82

Teste 3
55
*/

int main(){
 
int numeros, teste = 1, i;
 

    while(scanf("%d", &numeros) && numeros ){
        printf("Teste %d\n",teste++);

    int  resultado_calculo, variAux_calculo;
    char operacao;

    scanf("%d", &resultado_calculo);
    for(i = 1; i < numeros ; i++){
        scanf("%c %d", &operacao, &variAux_calculo);
        
        
        if(operacao == '+'){
            resultado_calculo += variAux_calculo;

        }else if(operacao == '-'){
            resultado_calculo -= variAux_calculo;
        }


    } 
        printf("%d\n", resultado_calculo);
    }
} 