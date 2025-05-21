// 16. Verifique se dois vetores são iguais.

#include <stdio.h>

int main() {
    int vetor1[3] = {1, 2, 3}, vetor2[3] = {1, 2, 3}, iguais = 1;
    for (int i = 0; i < 3; i++) {
        if (vetor1[i] != vetor2[i]) {
            iguais = 0;
            break;
        }
    }
    printf("%s\n", iguais ? "Iguais" : "Diferentes");
    return 0;
}
