// 2. Escreva um programa que imprima todos os elementos de um vetor.

#include <stdio.h>

int main() {
    int vetor[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }
    return 0;
}
