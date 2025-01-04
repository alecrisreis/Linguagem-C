#include <stdio.h>
#include <stdlib.h>

int main()
{
    void teste (void);

    teste ();
    teste ();

    return 0;
}

void teste (void){

    int variavelLocalAutomatica =2; //visivel apenas para a funcao teste//
                                     //e automatica pq e recriada//
    variavelLocalAutomatica *= 2;

    printf ("%d\n", variavelLocalAutomatica);

}
