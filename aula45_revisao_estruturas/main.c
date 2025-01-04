#include <stdio.h>
#include <stdlib.h>

// ESTRUTURA GLOBAL SERA USADA POR OUTRAS FUNCOES//

struct horario {
    int hora;
    int minuto;
    int segundo;
};

int main()
{
    void receberHorarios(struct horario lista[5]);
    void printfHorarios(struct horario lista[5]);
    struct horario listaHorarios[5];

    receberHorarios(listaHorarios);
    printfHorarios(listaHorarios);

    return 0;
}
void receberHorarios(struct horario lista[5]){

    int i;
    for (i = 0; i < 5; ++i){
        printf ("Digite o %d horario (hh:mm:ss):", i + 1);
        scanf ("%d, %d, %d", &lista [i]. hora, &lista [i].minuto,  &lista [i]. segundo);
    }
}
void printfHorarios(struct horario lista[5]){

    int i;
    for (i = 0; i<5; ++i){
        printf ("O %d horario e = %d, %d, %d", i +1, &lista [i]. hora, &lista [i]. minuto,&lista [i]. segundo);
    }

}
