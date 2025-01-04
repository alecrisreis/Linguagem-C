#include <stdio.h>
#include <stdlib.h>

//FUNCAO RECURSIVA = FUNCAO QUE CHAMA ELA MESMA//


int main()
{
    int fatorial (int x);
    int numero, resultado;

    printf ("Digite um numero inteiro: ");
    scanf ("%d", &numero);

    resultado = fatorial (numero);

    printf ("O fatorial e: %d\n: ", resultado);

    system ("pause");
    return 0;
}
int fatorial (int x)
{

    int resultado;

    if ( x ==0){
        resultado = 1;
    }
    else {
        resultado = x *fatorial (x-1);
    }


    return resultado;
}

