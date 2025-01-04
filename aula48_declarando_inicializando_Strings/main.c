#include <stdio.h>
#include <stdlib.h>

int main()
{
    char palavra[7] =  {"BRASIL"};
    //O ESPAÇO CONTA COMO CARACERE É CONSIDERADO\0//
    //OU PODE SER FEITO://
    //char palavra[] = "BRASIL";//

    printf("%s\n", palavra);


    return 0;
}
