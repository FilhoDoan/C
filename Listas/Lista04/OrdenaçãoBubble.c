#include <stdio.h>
#define less(A,B)((A)<(B))
#define exch(A,B) { int aux = A; A = B; B = aux; }
#define cmpexch(A,B) { if (less(B, A)) exch(A, B); }

void bubbleSort(int *v, int tamanho){
    for(int i = 0 ; i < tamanho -1  ; i++){
        for(int j = 0 ; j < tamanho -1; j++){
            cmpexch(v[j], v[j+1]); 
        }
    }
}
int main()
{
    int numeros[1000];
    int tamanho = 0;

    while (scanf("%d", &numeros[tamanho]) != EOF)
    {
        tamanho++;
    } 

    bubbleSort(numeros,tamanho); 

    for (int i = 0; i <tamanho; i++)
    {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}