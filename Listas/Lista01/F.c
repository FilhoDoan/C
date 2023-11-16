#include <stdio.h>

int main()
{
    // Cartas
    int c1, c2, c3, c4, c5;

    scanf("%d %d %d %d %d", &c1, &c2, &c3, &c4, &c5);

    /* Verificando a validade do crescimento de cada carta
    comparando se e uma maior que outra */
    if (c1 < c2 && c2 < c3 && c3 < c4 && c4 < c5)
    {
        printf("C");
    }
    else if (c1 > c2 && c2 > c3 && c3 > c4 && c4 > c5)
    { /* Verificando a validade do decrescimento de cada carta
       comparando se uma e menor que outra */
        printf("D");
    }
    else
    { // caso tenha uma sequencia com numeros aleatorios
        printf("N");
    }
}