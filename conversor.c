#include <stdio.h>

int horasMinutos()
{
    int horas;
    int minutos;
    printf("Digite seu tempo:\n ");
    scanf("%d", &horas);

    minutos = horas * 60;

    printf("%d horas sao %d minutos", horas, minutos);
}

int minutosHoras()
{

    int horas2;
    int minutos2;
    printf("Digite seu tempo:\n ");
    scanf("%d", &minutos2);

    horas2 = minutos2 / 60;
    printf("%d Minutos sao %d horas", minutos2, horas2);
}

int main()
{
    int opcoes;

    printf("Deseja converter qual opcao ?\n");
    printf("opcao 1 : horas   --> minutos \n");
    printf("opcao 2 : minutos --> horas \n");

    printf("Digite sua opcao :\n ");
    scanf("%d", &opcoes);

    if (opcoes == 1)
    {
        horasMinutos();
    }
    else if (opcoes == 2)
    {
        minutosHoras();
    }
    else
    {
        printf("Erro");
    }
}