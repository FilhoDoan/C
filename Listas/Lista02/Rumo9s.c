#include <stdio.h>
#include <ctype.h>

// teste recursivo
/*
Computar a soma S dos seus digitos
se 9 for multiplo de nove ent N é multiplo de nove
grau = qnt de digito
*/
/*
somar os digitos
verificar se é multiplo de 9
e verificar os degrais
*/

int main()
{
    char noves[1001];

    while (1)
    {
        scanf("%s", noves);
        if (noves[0] == '0' && noves[1] == '\0')
            break;

        int grau = 0;
        int soma = 0;

        // coletar a soma

        for (int i = 0; i < noves[i] != '\0'; i++)
        {
            soma += noves[i] - '0';
        }

        while (soma % 9 == 0 && soma > 9)
        {
            int somaTemporaria = 0;
            while (soma > 0)
            {

                somaTemporaria += soma % 10;
                soma /= 10;
            }
            soma = somaTemporaria;
            grau++;
        }
        if (soma == 9)
        {
            grau++;
            printf("%s is a multiple of 9 and has 9-degree %d.\n", noves, grau);
        }
        else
        {

            printf("%s is not a multiple of 9.\n", noves);
        }
    }
    return 0;
}
