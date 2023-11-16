#include <stdio.h>
#include <string.h>

int somaDigitos(char *numero)
{

    int soma = 0;
    int tamanho = strlen(numero);
    if (tamanho > 0)
    {

        soma += *numero - '0' + somaDigitos(numero + 1);
    }

    return soma;
}

int main()
{
    char numero[1000];
    scanf("%s", numero);
    int saida = somaDigitos(numero);
    printf("%d\n", saida);
}
