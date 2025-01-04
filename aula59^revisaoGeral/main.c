#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct dicionario {
    char palavra[20];
    char definicao[50];
};

bool compararStrings(const char palavra1[], const char palavra2[]) {
    int i = 0;
    while (palavra1[i] == palavra2[i] && palavra1[i] != '\0' && palavra2[i] != '\0') {
        ++i;
    }

    if (palavra1[i] == '\0' && palavra2[i] == '\0') {
        return true;
    } else {
        return false;
    }
}

int procurarStrings(const struct dicionario lingua[], const char procurar[], const int numDePalavras) {
    int i = 0;
    while (i < numDePalavras) {
        if (compararStrings(procurar, lingua[i].palavra)) {
            return i;
        } else {
            ++i;
        }
    }
    return -1;
}

int main() {
    const int NUMERODEDEFINICOES = 4;
    char palavra[20] = {'\0'};
    int resultadoPesquisa;

    struct dicionario portugues[4] =
    {{"pao", "carboidrato"},
    {"feijao", "leguminosa"},
    {"queijo", "laticinio"},
    {"arroz", "cereal"}};

    printf("Digite uma palavra:");
    scanf("%s", palavra);
    resultadoPesquisa = procurarStrings(portugues, palavra, NUMERODEDEFINICOES);

    if (resultadoPesquisa != -1) {
        printf("%s\n", portugues[resultadoPesquisa].definicao);
    } else {
        printf("Palavra nao encontrada\n");
    }

    return 0;
}
