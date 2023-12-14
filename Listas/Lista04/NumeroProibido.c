#include <stdio.h>
#include <stdlib.h>

#define Chave int  // Define Chave como um alias para int
#define chave(x) (x)  // Define chave como uma função para obter a chave de um item

// Função para realizar busca binária em um array
int busca(Chave *array, int tamanhoArray, int alvo)
{
    int esquerda = 0, direita = tamanhoArray - 1;
    // Enquanto o espaço de busca não estiver vazio
    while (esquerda <= direita)
    {
        // Calcula o índice do meio
        int meio = (esquerda + direita) / 2;
        // Se o alvo for encontrado
        if (chave(array[meio]) == alvo)
            return 1;
        // Se o alvo for maior que o elemento do meio
        else if (chave(array[meio]) < alvo)
            esquerda = meio + 1;  // Estreita o espaço de busca para a metade direita
        // Se o alvo for menor que o elemento do meio
        else
            direita = meio - 1;  // Estreita o espaço de busca para a metade esquerda
    }
    // Se o alvo não for encontrado
    return 0;
}

// Função para mesclar dois arrays ordenados em um só
void merge(Chave *array1, int tamanho1, Chave *array2, int tamanho2)
{
    // Aloca memória para o array temporário
    Chave *arrayTemp = (Chave *)malloc((tamanho1 + tamanho2) * sizeof(Chave));
    int i = 0, j = 0, k = 0;
    // Enquanto houver elementos em ambos os arrays
    for (; i < tamanho1 && j < tamanho2; k++)
    {
        // Se o elemento atual em array1 for menor ou igual ao elemento atual em array2
        if (chave(array1[i]) <= chave(array2[j]))
            arrayTemp[k] = array1[i++];  // Copia o elemento de array1 para o array temporário
        else
            arrayTemp[k] = array2[j++];  // Copia o elemento de array2 para o array temporário
    }

    // Copia os elementos restantes de array1, se houver
    while (i < tamanho1)
        arrayTemp[k++] = array1[i++];
    // Copia os elementos restantes de array2, se houver
    while (j < tamanho2)
        arrayTemp[k++] = array2[j++];

    // Copia os elementos ordenados do array temporário de volta para array1
    for (k = 0, i = 0; i < (tamanho1 + tamanho2); i++, k++)
        array1[i] = arrayTemp[k];

    // Libera a memória alocada para o array temporário
    free(arrayTemp);
}

// Função para realizar o merge sort em um array
void mergeSort(Chave *array, int tamanhoArray)
{
    // Se o array tiver menos de 2 elementos, ele já está ordenado
    if (tamanhoArray < 2) return;
    // Calcula o índice do meio
    int meio = tamanhoArray / 2;
    // Ordena recursivamente a metade esquerda do array
    mergeSort(array, meio);
    // Ordena recursivamente a metade direita do array
    mergeSort(&array[meio], tamanhoArray - meio);
    // Mescla as duas metades ordenadas
    merge(array, meio, array + meio, tamanhoArray - meio);
}

int main()
{
    int tamanhoArray;
    // Lê o tamanho do array da entrada
    scanf("%d", &tamanhoArray);
    // Aloca memória para o array
    Chave *array = (Chave *)malloc(tamanhoArray * sizeof(Chave));
    // Lê os elementos do array da entrada
    for (int i = 0; i < tamanhoArray; i++)
        scanf(" %d", &array[i]);

    // Ordena o array
    mergeSort(array, tamanhoArray);

    // Para cada número na entrada
    for (int numero; scanf(" %d", &numero) == 1;)
    {
        // Imprime "sim" se o número estiver no array, "nao" caso contrário
        printf("%s\n", busca(array, tamanhoArray, numero) ? "sim" : "nao");
    }

    return 0;
}
