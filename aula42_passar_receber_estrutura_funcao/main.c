#include <stdio.h>
#include <stdlib.h>


//QUANDO A DEFINICAO DA ESTRUTURA E COLOCADA FORA TODOS CONSEGUEM LER//

    struct horario{
    int horas  ;
    int minutos;
    int segundos;
    };

int main()
{
    struct horario teste (struct horario x);

    struct horario agora; //AGORA E O NOME DA ESTRUTURA//DECLARCAO DA ESTRUTURA//
    agora. horas = 10;
    agora. minutos = 42;
    agora. segundos = 58;

    struct horario proxima;
    proxima = teste (agora);

    printf ("%d, %d, %d\n", proxima.horas, proxima.minutos, proxima.segundos);
     proxima.horas = 100;
     proxima.minutos = 100;
     proxima.segundos = 100;

    system ("pause");
    return 0;
}

struct horario teste (struct horario x){ // ESQUELETO DA ESTRUTURA//

 printf ("%d, %d, %d\n", x.horas,x.minutos, x.segundos);

     x.horas = 100;
     x.minutos = 100;
     x.segundos = 100;
    return x;

}
