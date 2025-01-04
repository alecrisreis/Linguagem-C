#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Declaração da função stringsIguais
bool stringsIguais(char s1[], char s2[]);

int main() {
    if (stringsIguais("casa", "casa")) {
        printf("sao iguais\n");
    } else {
        printf("nao sao iguais\n");
    }
    return 0;
}

// DEFINICAO DA FUNCAO STRINGIGUAIS
bool stringsIguais(char s1[], char s2[]) {
    int i = 0;

    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0') {
        ++i;
    }
    if (s1[i] == '\0' && s2[i] == '\0') {
        return true;
    } else {
        return false;
    }
}
