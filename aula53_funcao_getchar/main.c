#include <stdio.h>
#include <stdlib.h>

//DESSA FORMA O CODIGO PEGA TUDO QUE O USUARIO DIGITA//

int main()
{
    char linha[100];
    char caractere;
    int i =0;

    do{
            caractere = getchar();
            linha [i] = caractere;
            ++i;
        }while (caractere != '\n');

        linha[i -1] ='\0';
        //PARA QUE SEJA ESCRITO NA MESMA POSIÇÃO QUE O ESPACO VAZIO OCUPA//
        //QUANDO O USUARIO APERTA ENTER O PROGRAMA ENTENDE QUE ELE TERMINOU//

        printf ("%s \n", linha);

        return 0;
}
