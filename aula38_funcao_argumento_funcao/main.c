#include <stdio.h>
#include <stdlib.h>

int main()
{
    void funcaoPrint (int x, int vetor[]);
    int x = 10;
    int vetor[3] = {10};


    funcaoPrint (x, vetor);

    printf ("Variavel int na funcao pricnipal = %d\n", x);
    printf ("Vetor na funcao pricnipal = %d\n", vetor [1]);

    system ("pause");
    return 0;
}

void funcaoPrint (int x, int vetor[]){

        x = x +10;
        vetor [1] = 20;

    printf ("Variavel int na funcao pricnipal = %d\n", x);
    printf ("Vetor na funcao pricnipal = %d\n", vetor [1]);

}
