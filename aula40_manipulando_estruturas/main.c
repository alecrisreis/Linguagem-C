#include <stdio.h>
#include <stdlib.h>

//1 NA MAIN DEFINIR A ESTRUTURA//

int main()
{
    struct horario{ //ESQUELETO DA ESTRUTURA// PODE SER VARIOS TIPOS JUNTOS//
    int horas  ;
    int minutos;
    int segundos;
    };

    struct horario agora; //AGORA E O NOME DA ESTRUTURA//DECLARCAO DA ESTRUTURA//

    agora. horas = 18;
    agora. minutos = 17;
    agora. segundos = 30;

    struct horario depois;
    depois. horas = agora.horas + 10;
    depois. minutos = agora.minutos;

    printf ("%d\n", depois.horas);
    printf ("%d\n", depois.minutos);

    system ("pause");
    return 0;
}
