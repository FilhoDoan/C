#include <stdio.h>
#include <stdlib.h>
// ruas paralelas ou perpendiculares
// definir os cruzamentos

int main()
{

    int xm, ym, xr, yr, cruzamentos;

    scanf("%d %d %d %d", &xm, &ym, &xr, &yr);

    cruzamentos = abs(xr - xm) + abs(yr - ym);       /* distancia de manhattan na qual é o modulo da diferença das
                                                        das distancias*/

    printf("%d", cruzamentos);
}