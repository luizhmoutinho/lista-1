// 8. Crie um vetor com os primeiros 10 números ímpares.

#include <stdio.h>

int main() {
    int vetor[10];
    for (int i = 0; i < 10; i++) {
        vetor[i] = 2 * i + 1;
        printf("%d ", vetor[i]);
    }
    return 0;
}
