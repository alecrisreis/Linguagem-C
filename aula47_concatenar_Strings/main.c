#include <stdio.h>
#include <stdlib.h>

int main()
{
    void concatenarStrings (char string1[], int t1, char string2[], int t2, char string3[]);

    char palavra1[] = {'p', 'a', 'o', ' '};
    char palavra2[] = {'q', 'u', 'e', 'i', 'j', 'o'};
    char novaPalavra[10];

    concatenarStrings (palavra1,4, palavra2,6, novaPalavra);

    int i;
    for (i =0; i <10; ++i){
        printf ("%c", novaPalavra[i]);
    }
    printf ("\n");


    return 0;
}

void concatenarStrings (char string1[], int t1, char string2[], int t2, char string3[]){

    int i, j;

    for(i = 0; i < t1; ++i){
                string3[i] = string1[i];
    }
    for(j = 0; j < t2; ++j){
                string3[t1 + j] = string2[j]; //ESSA PARTE QUE JUNTOS AS PALAVRAS//
    }


}
