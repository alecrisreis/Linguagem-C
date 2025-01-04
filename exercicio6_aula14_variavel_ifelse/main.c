#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;

    printf ("Favor informar a idade: \n");
    scanf("%d", &idade);

    if (idade < 18){
        printf ("Bebidas alcolicas nao estao liberadas! \n");
    }
    else
        printf("Bebidas alcoolicas liberadas!\n Aproveite!\n Beba com moderacao!\n");

    return 0;
}
