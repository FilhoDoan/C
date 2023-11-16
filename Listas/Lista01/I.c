#include <stdio.h>


int main (){
    //atributos, tendo algumas variaveis para ajudar a fazer os calculos    
   int num_Leituras, capacidade_Max, saidas = 0, entradas = 0, cont_Entr, cont_Sai, alerta = 0 ;
         
        scanf("%d %d", &num_Leituras ,&capacidade_Max);

        // for com limitante relacionado ao numero de leituras 
        for(int i = 0; i < num_Leituras; i++){
        
            scanf("%d %d",&cont_Sai, & cont_Entr);
            
            entradas -= cont_Sai; 
            entradas += cont_Entr;
            
            if(entradas > capacidade_Max){
                alerta ++;
            }

    }if(alerta > 0){
        printf("S");
     }else{
     printf("N");
     }         
}
   