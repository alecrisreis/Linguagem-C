#include <stdio.h>
#include <stdlib.h>

//COMO VERIFICAR SE A VARIAVEL DIGITADA E LETRA//


int main()
{
    void alfabetico (char variavel);

    char nome[20];
    printf("Digite uma palavra: ");
    scanf("%s", nome);

    int i = 0;
    while(nome[i] != '\0'){
        alfabetico (nome[i]);
        ++i;
    }

    return 0;
}

void alfabetico (char variavel){

        if ((variavel >= 'a' && variavel <= 'z')||(variavel >= 'A' && variavel <= 'Z')){
            printf ("e uma letra:\n ");
        }
        else {
            printf (" nao e uma letra:\n ");
        }
}
