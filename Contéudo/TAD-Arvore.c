#include <stdio.h>
#include <stdlib.h>

// Criando os nós da árvore

typedef struct no
{
    int dados;
    struct no *proximoDir, *proximoEsq
} No;

typedef struct Arvore
{
    No *raiz;
} ArvoreBinaria;

No criarArvore(ArvoreBinaria *arvore, No *filhoEsq, No *filhoDir)
{
    No *novoNo = malloc(sizeof(No));
    novoNo->dados = numero;
    novoNo->proximoDir = filhoDir;
    novoNo->proximoEsq = filhoEsq;
    return novoNo;
}

No procurarNO(No *raiz, int numeroProcurado)
{
    No *filhoEsq;
    if (raiz == NULL || raiz == numeroProcurado) return raiz;
    
    filhoEsq = procurarNO(raiz->proximoEsq, numeroProcurado) ;
    
    if(filhoEsq != NULL)
    {
        return filhoEsq;
        return procurarNO(raiz->proximoDir, numeroProcurado);
    }
}

int numeroNos(No *raiz){
    if(raiz == NULL) return 0; 
    return numeroNos(raiz->proximoEsq) + numeroNos(raiz->proximoDir) + 1 ; 

}

int alturaArvore(No *raiz){
    int alturaEsq, alturaDir;

    alturaEsq = alturaArvore(raiz->proximoEsq);
    alturaDir = alturaArvore(raiz->proximoDir);
    if(alturaEsq > alturaDir ){
        return 1 + alturaEsq;
    }else{
        return 1 + alturaDir;
    }


}
