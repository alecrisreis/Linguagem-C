#include <stdio.h>
#include <stdlib.h>

int main()
{
    float somaDeDigitos (float num1, float num2);
    float a, b, soma;

    printf ("Digite 2 numeros: \n");
    scanf ("%f", &a);
    scanf ("%f", &b);


    soma = somaDeDigitos (a, b);
    printf ("A soma e:%2.f\n", soma);

    system ("pause");
    return 0;
}
float somaDeDigitos (float num1, float num2){

    float valorAbsoluto (float x);

    if (num1 < 0){
            num1 =  valorAbsoluto (num1);
          }

    if (num2 < 0){
            num2 =  valorAbsoluto (num2);
          }

          return num1 + num2;

}

float valorAbsoluto (float x){
return x *= -1;
}
