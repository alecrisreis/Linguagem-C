#include <stdio.h>
#include <stdlib.h>

int main()
{
    void teste (void);

//chama a funcao//

    teste ();
    teste ();

    return 0;
}

void teste (void){

//visivel apenas para a funcao teste//
//e automatica pq e recriada//

    int variavelLocalAutomatica =2;
    variavelLocalAutomatica *= 2;

    //local estatica nao perde o valor, cada vez que e chamada//

    static int variavelLocalEstatica =2;
    variavelLocalEstatica *= 2;

    printf ("Local Automatica = %d\n", variavelLocalAutomatica);
    printf ("Local Estatica = %d\n", variavelLocalEstatica);

    //local porque nao pode ser usada na main//

}
