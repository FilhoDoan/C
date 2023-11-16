#include <stdio.h>


/*
    A entrada precisa ser um caso de Teste, começando em 1
    a,b -> numero de figurinhas de Aldo e Beto     
    Final da partida r == 0 
    a ultima linha deve ser deixada em branco 
*/

int main(){
    
    int  teste = 1 , i, numRodadas , cartas_Beto , cartas_Aldo, pA, pB  ; 

    while(scanf("%d", &numRodadas)&& numRodadas){
        printf("Teste %d\n", teste++);

    pA = 0;
    pB = 0;

    for(i = 1; i <= numRodadas; i++){
        scanf("%d" "%d",&cartas_Aldo,&cartas_Beto);
    pA += cartas_Aldo;
    pB += cartas_Beto;
    
    }if(pA > pB){
        printf("Aldo");
    }else if (pA < pB){
        printf("Beto");
    }printf("\n\n");
    } 
    }