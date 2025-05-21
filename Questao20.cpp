// 20. Encontre o segundo maior elemento de um vetor.

#include <stdio.h>

int main() {
    int vetor[5] = {5, 3, 9, 1, 7};
    int maior = vetor[0], segundo = vetor[0];
    for (int i = 1; i < 5; i++) {
        if (vetor[i] > maior) {
            segundo = maior;
            maior = vetor[i];
        } else if (vetor[i] > segundo && vetor[i] != maior) {
            segundo = vetor[i];
        }
    }
    printf("Segundo maior = %d\n", segundo);
    return 0;
}
