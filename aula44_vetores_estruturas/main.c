#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct horario{
    int hora  ;
    int minuto;
    int segundo;
    };

struct horario teste[5]; //PODE INICIAR O VETOR JA COM VALOR DEFINIDO//

    teste[0].hora = 10;
    teste[0].minuto = 20;
    teste[0].segundo = 30;

    printf ("%d, %d, %d\n", teste[0].hora, teste[0].minuto, teste[0].segundo);

system ("pause");
return 0;
}
//OU PARA FAZER O VETOR INTEIRO USAR DO SEGUINTE MODO://

//struct horario teste[5]= //TIRA O PONTO E VIRGULA E COLOCA IGUAL//
// JOGA OS VALORES ENTRE CHAVES FORA DA CHAVE DE INICIO E DE FIM//

//{{10, 20,30},{20,20,20}, {30,20,20}, {40,20,20}, {50,20,20}};//
//FAZ UM LOOP PARA CHAMAR O PRINTF//

// int i;
 //for (i =0; i<5; ++i){//
   //printf ("%d, %d, %d\n", teste[i].hora, teste[1].minuto, teste[1].segundo); //
 }


