// 14. Encontre a posição de um elemento específico em um vetor.

#include <stdio.h>

int main() {
    int vetor[5] = {5, 10, 15, 20, 25}, valor = 15;
    for (int i = 0; i < 5; i++) {
        if (vetor[i] == valor) {
            printf("Posicao: %d\n", i);
            break;
        }
    }
    return 0;
}
