#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tamanhoString (char string[]);
    char stringUsuario[20];

    printf("Digite uma palavra (string)\n");
    scanf("%s", stringUsuario);

    int num = tamanhoString(stringUsuario);

    printf("A string %s possui %d caracteres.\n", stringUsuario, num);

    return 0;
}

int tamanhoString (char string[]){

    int numCaracteres =0;

        while (string[numCaracteres] != '\0'){
                ++numCaracteres;
        }
        ++numCaracteres; //AQUI CONTA ATE O ESPA�O NULO//
         return numCaracteres;

}
