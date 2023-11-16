#include <stdio.h>

int main()
{
    /*   A = preço do Alcool
         G = preco da Gasolina
         Ra = rendimento por km do alcool
         Rg = rendimento pr km de Gasolina

         CustoA = custo rendido em relação ao preco do Alcool e
        rendimento por km dando o custo por km
         CustoG = custo rendido em relação ao preco do Gasolina e
        rendimento por km dando o custo por km

         os custos são calculados como a divisão do preço pelo rendimento

    */

    double a, g, ra, rg, custoA, custoG;

    scanf("%lf %lf %lf %lf", &a, &g, &ra, &rg);

    custoA = a / ra;
    custoG = g / rg;

    if (custoA >= custoG)
    {
        printf("G");
    }
    else
    {
        printf("A");
    }
}