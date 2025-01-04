#include <stdio.h>
#include <stdlib.h>

//variavel global e declarada antes da main//
//altera todas as funcoes//
//fica disponivel para a funcao main e funcao teste//

int gVariavelGlobal =2;


int main()
{
    void teste (void);

    printf ("Global = %d\n", gVariavelGlobal );
    teste ();
    teste ();

    return 0;
}

void teste (void){

//visivel apenas para a funcao teste//
//e automatica pq e recriada//
    int variavelLocalAutomatica =2;
    variavelLocalAutomatica *= 2;

    static int variavelLocalEstatica = 2;
    variavelLocalEstatica *=2 ;

    gVariavelGlobal *= 2;

    printf ("Local Automatica = %d\n", variavelLocalAutomatica);
    printf ("Local Estatica = %d\n", variavelLocalEstatica);
    printf ("Global = %d\n", gVariavelGlobal );

    //variavel global se comporta como a estatica//
}
