#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num1 = 20;
    int num2 = 10;
    int resposta;

    num1 < num2 ? printf ("sim\n") : printf ("nao\n");

    (num1 < num2) ? (resposta = 10) : (resposta = -10);

    printf ("%d\n", resposta);

    return 0;
}
