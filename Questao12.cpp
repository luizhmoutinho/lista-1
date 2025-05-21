// 12. Ordene um vetor em ordem decrescente.

#include <stdio.h>

int main() {
    int vetor[5] = {5, 3, 1, 4, 2}, temp;
    for (int i = 0; i < 5 - 1; i++) {
        for (int j = 0; j < 5 - 1 - i; j++) {
            if (vetor[j] < vetor[j + 1]) {
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 5; i++) printf("%d ", vetor[i]);
    return 0;
}
