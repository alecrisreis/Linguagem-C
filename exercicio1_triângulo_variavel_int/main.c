#include <stdio.h>
#include <stdlib.h>

int main()
{
    int base;
    int altura;
    int area;

    printf ("Digite o valor da base\n");
    scanf ("%d", &base);

    printf ("Digite o valor da altura\n");
    scanf ("%d", &altura);

    area =  base * altura;

    printf ("O valor da area do triangulo e: =%d\n", &area);

    return 0;
}
