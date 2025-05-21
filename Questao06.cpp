// 6. Multiplique todos os elementos de um vetor por 2.

#include <stdio.h>

int main() {
    int vetor[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) {
        vetor[i] *= 2;
        printf("%d ", vetor[i]);
    }
    return 0;
}
