#include <stdio.h>

int main()
{

    /* L = comprimento da pista
       D = Distancia entre os pedagios
       K = custo por km
       P = valor de cada pedagio
     */
    int L, D, K, P;
    int precoTotal;
    scanf("%d %d %d %d", &L, &D, &K, &P);

        precoTotal = (L*K) + (L/D)*P;

        printf("%d", precoTotal);
    
}