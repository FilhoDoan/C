#include <stdio.h>

int main()
{
    /*Conteiners identicos com A = largura | B = comprimento | C = altura
      Navio um retangulo horizontal com X = largura | Y = comprimento | nenhuma parte dos conteiner pode ficar fora do navio
      Travessia de pontes altura maxima da carga tem q ser de Z = altura maxima
      ### Só podem ser carregados alinhados com o navio  e largura e comprimento(Conteiners) tem q ser paralelo ao do navio */

    int a, b, c, x, y, z; // dimensoes do conteiner e dimensoes do navio

    scanf("%d %d %d %d %d %d", &a, &b, &c, &x, &y, &z);

    printf("%d\n", (x/a)*(y/b)*(z/c)); //  calcula a quantidade da base na qual a nave pode suportar
                                       //  calcula quantos conteiners podem ser empilhados a partir da base
}