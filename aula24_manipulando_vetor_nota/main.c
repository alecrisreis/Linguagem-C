#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota[5] = {0};
    float total = 0;
    float media = 0;

    printf("Insira 5 notas:\n");

    for (int i = 0; i < 5; ++i) {
        scanf("%f", &nota[i]);
    }

    for (int i = 0; i < 5; ++i) {
        total += nota[i];
    }

    media = total / 5;

    printf("A media do aluno e: %f\n", media);

    return 0;
}
