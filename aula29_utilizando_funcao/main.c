#include <stdio.h>
#include <stdlib.h>

int main() //void e a mesma coisa que "nao faca nada"//
{

    float calcularAreaRetangulo (float base, float altura);

    float  area = calcularAreaRetangulo (10.0, 20.0);

    printf ("A area e: %1.f", area);

    return 0;
}

//funcao facilita o desenvolvimento para nao ficar repetindo codigo//
float calcularAreaRetangulo (float base, float altura){

    float area =  base * altura;

return area;
}
