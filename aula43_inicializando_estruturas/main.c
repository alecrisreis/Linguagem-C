#include <stdio.h>
#include <stdlib.h>


int main()
{

struct horario{
    int horas  ;
    int minutos;
    int segundos;
    };

     struct horario agora = {10,2030};
     //AGORA E O NOME DA ESTRUTURA//DECLARCAO DA ESTRUTURA//
     //QUANDO NAO COLOCA VALOR E EMITIDO 0//

    //agora. horas = 10;
    //agora. minutos = 42;//
    //agora. segundos = 58;//
    //OUTRA FORMA DE ATRIBUIR VALOR//


    printf ("%d, %d, %d\n", agora.horas, agora.minutos, agora.segundos);


    system ("pause");
    return 0;
}

