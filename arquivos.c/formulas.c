#include <stdio.h>
#include <math.h>

//funcoes
int formula1(int a, int b, int c)
{
    int resultado;
    resultado = a * a + b / c + sqrt(2);
    printf("Seu resultado e : %d", resultado);
};

int formula2(int a, int b, int c)
{
    if (a > b)
    {
        printf("C = 400");
    }
    else
    {
        printf("a nao e maior que b");
    };
};
int formula3(int a, int b, int c)
{
    if (a > b || a == b && c == 30)
    {
        printf("Condiçao valida");
    }
    else
    {
        printf("Condicao Invalida");
    };
}

// main
int main()
{
    struct variaveis
    {
        int a;
        int b;
        int c;
    } numeros;

    int opcao;


    printf("Digite suas variaveis:\n");
    printf("a :");
    scanf("%d", &numeros.a);

    printf("b :");
    scanf("%d", &numeros.b);

    printf("c :");
    scanf("%d", &numeros.c);

    printf("Seu numero a e : %d \n", numeros.a);
    printf("Seu numero a e : %d \n", numeros.b);
    printf("Seu numero a e : %d \n", numeros.c);

    printf("Escolha a formula : \n");
    scanf("%d", &opcao);

    if (opcao == 1)
    {
        formula1(numeros.a, numeros.b, numeros.c);
    }
    else if (opcao == 2)
    {
        formula2(numeros.a, numeros.b, numeros.c);
    }
    else if (opcao == 3)
    {
        formula3(numeros.a, numeros.b, numeros.c);
    }
    else
    {
        printf("Erro");
    };
}